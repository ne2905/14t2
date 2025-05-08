#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Khai báo cấu trúc dữ liệu SinhVien
struct SinhVien {
    string maSV;
    string hoDem;
    string ten;
    string gioiTinh;
    int namSinh;
    float diemTK;
};

// Hiển thị danh sách sinh viên
void hienThiDanhSach(const vector<SinhVien>& ds) {
    cout << "STT\tMa SV\t\tHo dem\t\tTen\tGioi tinh\tNam sinh\tDiem TK\n";
    int stt = 1;
    for (const auto& sv : ds) {
        cout << stt++ << "\t" << sv.maSV << "\t" << sv.hoDem << "\t\t" 
             << sv.ten << "\t" << sv.gioiTinh << "\t\t" 
             << sv.namSinh << "\t\t" << sv.diemTK << "\n";
    }
}

// Xóa phần tử đầu tiên trong danh sách
void xoaPhanTuDauTien(vector<SinhVien>& ds) {
    if (!ds.empty()) {
        ds.erase(ds.begin());
    }
}

// Chèn sinh viên vào vị trí thứ 3
void chenSinhVien(vector<SinhVien>& ds) {
    SinhVien svMoi = {"1006", "Le Thi", "Doan", "Nu", 1998, 7.6};
    if (ds.size() >= 2)
        ds.insert(ds.begin() + 2, svMoi); // Chèn vào vị trí thứ 3 (index = 2)
    else
        ds.push_back(svMoi);
}

// Sắp xếp danh sách theo tên bằng thuật toán chọn (selection sort)
void sapXepTheoTen(vector<SinhVien>& ds) {
    int n = ds.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (ds[j].ten < ds[minIndex].ten) {
                minIndex = j;
            }
        }
        if (minIndex != i) {
            swap(ds[i], ds[minIndex]);
        }
    }
}

// Hàm chính chạy chương trình
int main() {
    vector<SinhVien> danhSach = {
        {"SV1001", "Tran Van", "Thanh", "Nam", 1999, 7.5},
        {"SV1002", "Nguyen Thi", "Huong", "Nu", 2000, 7.3},
        {"SV1003", "Nguyen Van", "Binh", "Nam", 1998, 6.4},
        {"SV1004", "Bui Thi", "Hong", "Nu", 2000, 5.8},
        {"SV1005", "Duong Van", "Giang", "Nam", 2998, 8.3}
    };

    cout << "== Danh sach ban dau ==\n";
    hienThiDanhSach(danhSach);

    cout << "\n== Xoa phan tu dau tien ==\n";
    xoaPhanTuDauTien(danhSach);
    hienThiDanhSach(danhSach);

    cout << "\n== Chen sinh vien vao vi tri thu 3 ==\n";
    chenSinhVien(danhSach);
    hienThiDanhSach(danhSach);

    cout << "\n== Sap xep theo ten tang dan ==\n";
    sapXepTheoTen(danhSach);
    hienThiDanhSach(danhSach);

    return 0;
}
