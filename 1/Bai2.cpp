#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct DoVat {
    int giaTri, khoiLuong;
    double tyLe;
};

bool cmp(DoVat a, DoVat b) {
    return a.tyLe > b.tyLe;
}

void xepBaLo(vector<DoVat> &danhSach, int w) {
    sort(danhSach.begin(), danhSach.end(), cmp);

    double tongGiaTri = 0;
    int trongLuongConLai = w;

    cout << "Các vật được chọn:" << endl;
    for (auto &doVat : danhSach) {
        if (trongLuongConLai >= doVat.khoiLuong) {
            cout << "Giá trị: " << doVat.giaTri << ", Khối lượng: " << doVat.khoiLuong << endl;
            tongGiaTri += doVat.giaTri;
            trongLuongConLai -= doVat.khoiLuong;
        }
    }

    cout << "Tổng giá trị đạt được: " << tongGiaTri << endl;
}

int main() {
    int n, w;
    cout << "Nhập số lượng đồ vật: ";
    cin >> n;
    cout << "Nhập trọng lượng tối đa của ba lô: ";
    cin >> w;

    vector<DoVat> danhSach(n);
    for (int i = 0; i < n; i++) {
        cout << "Nhập giá trị và khối lượng của đồ vật " << i + 1 << ": ";
        cin >> danhSach[i].giaTri >> danhSach[i].khoiLuong;
        danhSach[i].tyLe = (double)danhSach[i].giaTri / danhSach[i].khoiLuong;
    }

    xepBaLo(danhSach, w);
    return 0;
}
