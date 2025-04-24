#include <iostream>
using namespace std;

int search(int x[], int n, int k) {
    int i = 0;
    while (i < n && x[i] != k)
        i++;
    return (i < n) ? i : -1;
}

void bai1() {
    int x[] = {34, 14, 24, 54, 84, 64, 94, 74, 4};
    int n = sizeof(x) / sizeof(x[0]);

    int k1 = 94, k2 = 55;
    int pos1 = search(x, n, k1);
    int pos2 = search(x, n, k2);

    cout << "Bai 1:\n";
    (pos1 != -1) ? cout << "Tim thay " << k1 << " tai vi tri " << pos1 << endl
                 : cout << "Khong tim thay " << k1 << endl;

    (pos2 != -1) ? cout << "Tim thay " << k2 << " tai vi tri " << pos2 << endl
                 : cout << "Khong tim thay " << k2 << endl;
}
