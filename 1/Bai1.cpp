#include <iostream>
using namespace std;

// Hàm nhập mảng từ bàn phím
void nhapMang(int x[], int n) {
    cout << "Nhap " << n << " phan tu cua mang:\n";
    for (int i = 0; i < n; i++) {
        cout << "x[" << i << "] = ";
        cin >> x[i];
    }
}

// Hàm in mảng
void printArray(int x[], int n) {
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}

// Hàm Selection Sort (sắp xếp giảm dần)
void selectionSort(int x[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int m = i; // Vị trí phần tử lớn nhất
        for (int j = i + 1; j < n; j++) {
            if (x[j] > x[m]) { // Sắp xếp giảm dần
                m = j;
            }
        }
        // Hoán đổi
        int tg = x[m];
        x[m] = x[i];
        x[i] = tg;
    }
}

int main() {
    int n;
    cout << "Bai 1: Sap xep noi bot voi Selection Sort\n";
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    // Khởi tạo mảng động
    int* x = new int[n];

    // Nhập mảng từ bàn phím
    nhapMang(x, n);

    // Hiển thị mảng ban đầu
    cout << "Day so ban dau: ";
    printArray(x, n);

    // Sắp xếp mảng bằng Selection Sort
    selectionSort(x, n);

    // Hiển thị mảng sau khi sắp xếp
    cout << "Day so sau khi sap xep giam dan: ";
    printArray(x, n);

    // Giải phóng bộ nhớ
    delete[] x;

    return 0;
}
