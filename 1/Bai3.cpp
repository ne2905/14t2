#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

struct HocSinh {
    string hoTen;
    string gioiTinh;
    int namSinh;
    float diemTongKet;
};

// Tìm kiếm tuyến tính theo tên và điểm
int timTheoTenVaDiem(const vector<HocSinh>& ds, string ten, float diem) {
    for (int i = 0; i < ds.size(); i++) {
        if (ds[i].hoTen == ten && ds[i].diemTongKet == diem)
            return i;
    }
    return -1;
}

// Tìm kiếm nhị phân theo điểm tổng kết (danh sách đã sắp xếp giảm dần)
int timTheoDiem(const vector<HocSinh>& ds, int left, int right, float diem) {
    if (left > right)
        return -1;

    int mid = (left + right) / 2;

    if (ds[mid].diemTongKet == diem)
        return mid;
    else if (ds[mid].diemTongKet < diem) // tìm bên trái vì giảm dần
        return timTheoDiem(ds, left, mid - 1, diem);
    else
        return timTheoDiem(ds, mid + 1, right, diem);
}

// Hàm main minh họa
int main() {
    vector<HocSinh> ds = {
        {"Nguyen Van A", "Nam", 2005, 9.0},
        {"Tran Thi B", "Nu", 2004, 8.5},
        {"Le Van C", "Nam", 2005, 8.0},
        {"Pham Thi D", "Nu", 2003, 7.5}
    };

    // Sắp xếp danh sách theo điểm giảm dần
    sort(ds.begin(), ds.end(), [](HocSinh a, HocSinh b) {
        return a.diemTongKet > b.diemTongKet;
    });

    string ten;
    float diem;

    cout << "Nhap ten hoc sinh can tim: ";
    getline(cin, ten);
    cout << "Nhap diem tong ket: ";
    cin >> diem;

    int viTri1 = timTheoTenVaDiem(ds, ten, diem);
    if (viTri1 != -1)
        cout << "Tim thay bang tim tuyen tinh o vi tri: " << viTri1 << endl;
    else
        cout << "Khong tim thay bang tim tuyen tinh.\n";

    int viTri2 = timTheoDiem(ds, 0, ds.size() - 1, diem);
    if (viTri2 != -1)
        cout << "Tim thay bang tim nhi phan o vi tri: " << viTri2 << endl;
    else
        cout << "Khong tim thay bang tim nhi phan.\n";

    return 0;
}
