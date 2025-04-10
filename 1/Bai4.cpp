#include <iostream>
#include <string>
using namespace std;

// Định nghĩa cấu trúc học sinh
struct Student {
    string hoTen;
    string gioiTinh;
    int namSinh;
    float diemTongKet;
};

// Hàm nhập thông tin học sinh
void nhapDanhSach(Student ds[], int n) {
    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin hoc sinh thu " << i + 1 << ":\n";
        cin.ignore(); // Xóa bộ đệm trước khi nhập chuỗi
        cout << "Ho va ten: ";
        getline(cin, ds[i].hoTen);
        cout << "Gioi tinh (Nam/Nu): ";
        getline(cin, ds[i].gioiTinh);
        cout << "Nam sinh: ";
        cin >> ds[i].namSinh;
        cout << "Diem tong ket: ";
        cin >> ds[i].diemTongKet;
    }
}

// Hàm hiển thị danh sách học sinh
void hienThiDanhSach(Student ds[], int n) {
    cout << "\nDanh sach hoc sinh:\n";
    cout << "STT\tHo va Ten\tGioi Tinh\tNam Sinh\tDiem Tong Ket\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << "\t" << ds[i].hoTen << "\t\t" << ds[i].gioiTinh 
             << "\t\t" << ds[i].namSinh << "\t\t" << ds[i].diemTongKet << endl;
    }
}

// Hàm Selection Sort theo tên (tăng dần)
void selectionSortByName(Student ds[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int m = i; // Vị trí phần tử nhỏ nhất (theo tên)
        for (int j = i + 1; j < n; j++) {
            if (ds[j].hoTen < ds[m].hoTen) { // So sánh tên để sắp xếp tăng dần
                m = j;
            }
        }
        // Hoán đổi
        Student tg = ds[m];
        ds[m] = ds[i];
        ds[i] = tg;
    }
}

// Hàm Bubble Sort theo tuổi (tăng dần, tuổi = năm hiện tại - năm sinh)
void bubbleSortByAge(Student ds[], int n) {
    int currentYear = 2025; // Năm hiện tại (theo ngày 10/04/2025)
    for (int i = 0; i <  n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            int tuoiJ
