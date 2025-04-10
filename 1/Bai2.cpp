#include <iostream>
using namespace std;

// Hàm in mảng
void printArray2(int x[], int n) {
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}

// Hàm Bubble Sort (sắp xếp giảm dần)
void bubbleSort2(int x[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            if (x[j] > x[j - 1]) { // Sắp xếp giảm dần
                int tg = x[j];
                x[j] = x[j - 1];
                x[j - 1] = tg;
            }
        }
    }
}

int main() {
    cout << "Bai 2: Sap xep lua chon voi Bubble Sort\n";
    int x[] = {50, 8, 34, 6, 98, 17, 83, 25, 66, 42, 21, 59, 63, 71, 85};
    int n = sizeof(x) / sizeof(x[0]);
    
    cout << "Day so ban dau: ";
    printArray2(x, n);
    
    bubbleSort2(x, n);
    
    cout << "Day so sau khi sap xep giam dan: ";
    printArray2(x, n);
    
    return 0;
}
