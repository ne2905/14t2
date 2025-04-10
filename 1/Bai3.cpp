#include <iostream>
using namespace std;

// Hàm in mảng
void printArray3(int x[], int n) {
    for (int i = 0; i < n; i++) {
        cout << x[i] << " ";
    }
    cout << endl;
}

// Hàm Insertion Sort (sắp xếp giảm dần)
void insertionSort3(int x[], int n) {
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
    cout << "Bai 3: Sap xep chen voi Insertion Sort\n";
    int x[] = {34, 14, 24, 54, 84, 64, 94, 74, 4}; // 04 được nhập là 4
    int n = sizeof(x) / sizeof(x[0]);
    
    cout << "Day so ban dau: ";
    printArray3(x, n);
    
    insertionSort3(x, n);
    
    cout << "Day so sau khi sap xep giam dan: ";
    printArray3(x, n);
    
    return 0;
}
