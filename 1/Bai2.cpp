#include <iostream>
using namespace std;

int tongLe(int a[], int n) {
    if (n == 0)
        return 0;

    if (a[n - 1] % 2 != 0)
        return a[n - 1] + tongLe(a, n - 1);

    return tongLe(a, n - 1);
}

int main() {
    int n, a[100];

    cout << "Nhap n (>=10): ";
    cin >> n;

    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Tong cac so le = " << tongLe(a, n);

    return 0;
}
