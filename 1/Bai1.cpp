#include <iostream>
#include <cstring>
using namespace std;

#define MAX 8 // Define maximum size for the array

struct SINHVIEN {
    int masv;
    char hodem[20];
    char ten[10];
    char gioitinh[10];
    int namsinh;
    float diemtk;
};

struct vector {
    int count;
    SINHVIEN e[MAX];
};

// Check if the vector is full
bool full(vector &v) {
    return v.count >= MAX;
}

// Create a new SINHVIEN
SINHVIEN taoSv(int masv, const char* hodem, const char* ten, const char* gioitinh, int namsinh, float diemtk) {
    SINHVIEN sv;
    sv.masv = masv;
    strcpy(sv.hodem, hodem);
    strcpy(sv.ten, ten);
    strcpy(sv.gioitinh, gioitinh);
    sv.namsinh = namsinh;
    sv.diemtk = diemtk;
    return sv;
}

// Display the list of students
void hienThiDs(vector &v) {
    cout << "\nDanh sach sinh vien:\n";
    for (int i = 0; i < v.count; i++) {
        cout << "Sinh vien " << i + 1 << ":\n";
        cout << "Ma SV: " << v.e[i].masv << "\n";
        cout << "Ho dem: " << v.e[i].hodem << "\n";
        cout << "Ten: " << v.e[i].ten << "\n";
        cout << "Gioi tinh: " << v.e[i].gioitinh << "\n";
        cout << "Nam sinh: " << v.e[i].namsinh << "\n";
        cout << "Diem TK: " << v.e[i].diemtk << "\n\n";
    }
}

// Remove the first element
void xoaptdt(vector &v) {
    if (v.count <= 0) {
        cout << "\nDanh sach rong...!\n";
        return;
    }
    for (int i = 0; i < v.count - 1; i++) {
        v.e[i] = v.e[i + 1];
    }
    v.count--;
}

// Insert a student at position pos (1-based indexing)
int insert(vector &v, int pos, SINHVIEN x) {
    if (pos <= v.count + 1 && pos > 0 && !full(v)) {
        for (int i = v.count; i >= pos; i--) {
            v.e[i] = v.e[i - 1];
        }
        v.e[pos - 1] = x;
        v.count++;
        return 1;
    }
    return 0;
}

// Insert a specific student at position 3
void chenSvVaoViTri3(vector &v) {
    SINHVIEN sv = taoSv(1006, "Le Thi", "Doan", "Nu", 1998, 7.6);
    if (insert(v, 3, sv)) {
        cout << "\nChen thanh cong...!";
        cout << "\nDanh sach sau khi chen:\n";
        hienThiDs(v);
    } else {
        cout << "\nChen khong thanh cong...!\n";
    }
}

// Sort students by name (ten)
void sapXepTheoTen(vector &v) {
    for (int i = 0; i < v.count - 1; i++) {
        int min_idx = i;
        for (int j = i + 1; j < v.count; j++) {
            if (strcmp(v.e[j].ten, v.e[min_idx].ten) < 0) {
                min_idx = j;
            }
        }
        if (min_idx != i) {
            SINHVIEN tg = v.e[i];
            v.e[i] = v.e[min_idx];
            v.e[min_idx] = tg;
        }
    }
}

int main() {
    vector ds;
    ds.count = 0;

    // Insert some initial students for testing
    SINHVIEN sv1 = taoSv(1001, "Nguyen Van", "An", "Nam", 2000, 8.5);
    SINHVIEN sv2 = taoSv(1002, "Tran Thi", "Binh", "Nu", 1999, 7.8);
    insert(ds, 1, sv1);
    insert(ds, 2, sv2);

    // Insert student at position 3
    chenSvVaoViTri3(ds);

    // Sort by name
    sapXepTheoTen(ds);
    cout << "\nDanh sach sau khi sap xep theo ten:\n";
    hienThiDs(ds);

    // Input additional students
    cout << "Nhap so sinh vien: ";
    int n;
    cin >> n;
    cin.ignore(); // Clear buffer

    for (int i = 0; i < n && !full(ds); i++) {
        SINHVIEN sv;
        cout << "\nNhap thong tin sinh vien thu " << i + 1 << ":\n";
        cout << "Ma SV: ";
        cin >> sv.masv;
        cin.ignore();
        cout << "Ho dem: ";
        cin.getline(sv.hodem, 20);
        cout << "Ten: ";
        cin.getline(sv.ten, 10);
        cout << "Gioi tinh: ";
        cin.getline(sv.gioitinh, 10);
        cout << "Nam sinh: ";
        cin >> sv.namsinh;
        cout << "Diem TK: ";
        cin >> sv.diemtk;
        cin.ignore();
        insert(ds, ds.count + 1, sv);
    }

    // Display final list
    cout << "\nDanh sach sinh vien cuoi cung:\n";
    hienThiDs(ds);

    return 0;
}
