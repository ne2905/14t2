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

// Hàm Insertion Sort (sắp xếp giảm dần)
void insertionSort(int x[], int n) {
    for (int i = 1; i < n; i++) {
        int tam = x[i], j = i - 1;
        while (j >= 0 && x[j] < tam) { // Sắp xếp giảm dần
            x[j + 1] = x[j];
            j--;
        }
        x[j + 1] = tam;
    }
}

int main() {
    int n;
    cout << "Bai 3: Sap xep chen voi Insertion Sort\n";
    cout << "Nhap so luong phan tu cua mang: ";
    cin >> n;

    // Khởi tạo mảng động
    int* x = new int[n];

    // Nhập mảng từ bàn phím
    nhapMang(x, n);

    // Hiển thị mảng ban đầu
    cout << "Day so ban dau: ";
    printArray(x, n);

    // Sắp xếp mảng bằng Insertion Sort
    insertionSort(x, n);

    // Hiển thị mảng sau khi sắp xếp
    cout << "Day so sau khi sap xep giam dan: ";
    printArray(x, n);

    // Giải phóng bộ nhớ
    delete[] x;

    return 0;
}
