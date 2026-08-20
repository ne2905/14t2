#include <iostream>
using namespace std;

float tongMang(float a[], int l, int r) {
    if (l == r)
        return a[l];

    int mid = (l + r) / 2;

    return tongMang(a, l, mid) + tongMang(a, mid + 1, r);
}

int main() {
    int n;
    float a[100];

    cout << "Nhap n (>=10): ";
    cin >> n;

    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Tong cac phan tu = " << tongMang(a, 0, n - 1);

    return 0;
}
