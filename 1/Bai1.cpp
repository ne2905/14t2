#include <iostream>
using namespace std;

// Hàm in mảng
void printArray1(int x[], int n) {
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}

// Hàm Selection Sort (sắp xếp giảm dần)
void selectionSort1(int x[], int n) {
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
    cout << "Bai 1: Sap xep noi bot voi Selection Sort\n";
    int x[] = {34, 74, 94, 84, 54, 24};
    int n = sizeof(x) / sizeof(x[0]);
    
    cout << "Day so ban dau: ";
    printArray1(x, n);
    
    selectionSort1(x, n);
    
    cout << "Day so sau khi sap xep giam dan: ";
    printArray1(x, n);
    
    return 0;
}
