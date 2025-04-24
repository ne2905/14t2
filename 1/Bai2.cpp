int binary_search(int x[], int left, int right, int k) {
    if (left > right)
        return -1;
    int mid = (left + right) / 2;
    if (x[mid] == k)
        return mid;
    else if (x[mid] > k)
        return binary_search(x, left, mid - 1, k);
    else
        return binary_search(x, mid + 1, right, k);
}

void bai2() {
    int x[] = {4, 14, 24, 34, 54, 64, 74, 84, 94};
    int n = sizeof(x) / sizeof(x[0]);

    int k1 = 34, k2 = 60;
    int pos1 = binary_search(x, 0, n - 1, k1);
    int pos2 = binary_search(x, 0, n - 1, k2);

    cout << "\nBai 2:\n";
    (pos1 != -1) ? cout << "Tim thay " << k1 << " tai vi tri " << pos1 << endl
                 : cout << "Khong tim thay " << k1 << endl;

    (pos2 != -1) ? cout << "Tim thay " << k2 << " tai vi tri " << pos2 << endl
                 : cout << "Khong tim thay " << k2 << endl;
}
