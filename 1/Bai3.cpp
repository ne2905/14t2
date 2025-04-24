#include <string>
#include <vector>
using namespace std;

struct HocSinh {
    string hoTen;
    string gioiTinh;
    int namSinh;
    float diemTongKet;
};

int timTheoTenVaDiem(const vector<HocSinh>& ds, string ten, float diem) {
    for (int i = 0; i < ds.size(); i++) {
        if (ds[i].hoTen == ten && ds[i].diemTongKet == diem)
            return i;
    }
    return -1;
}

int timTheoDiem(const vector<HocSinh>& ds, int left, int right, float diem) {
    if (left > right)
        return -1;
    int mid = (left + right) / 2;
    if (ds[mid].diemTong
