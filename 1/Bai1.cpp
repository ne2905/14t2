#include <iostream>
using namespace std;

int linearSearch(int x[], int n, int k) {
    int i = 0;
    while (i < n && x[i] != k) {
        cout << "i = " << i << "; x[" << i << "] = " << x[i]
             << " != " << k << " => i = i + 1" << endl;
        i++;
    }

    if (i < n) {
        cout << "i = " << i << "; x[" << i << "] = " << k << " => return i" << endl;
        return i;
    } else {
        cout << "i = " << i << " >= n => return -1" << endl;
        return -1;
    }
}

int main() {
    int x[] = {34, 14, 24, 54, 84, 64, 94, 74, 4};
    int n = sizeof(x) / sizeof(x[0]);

    int k;
    cout << "Nhap so can tim: ";
    cin >> k;

    int result = linearSearch(x, n, k);

    if (result != -1)
        cout << "Tim thay " << k << " tai vi tri " << result << " trong day." << endl;
    else
        cout << "Khong tim thay " << k << " trong day." << endl;

    return 0;
}
