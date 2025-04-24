#include <iostream>
using namespace std;

// Thuật toán tìm kiếm nhị phân đệ quy
int binary_search(int x[], int left, int right, int k) {
    if (left > right)
        return -1; // Dãy rỗng, tìm kiếm không thành công
    else {
        int mid = (left + right) / 2;
        if (x[mid] == k) return mid;
        else if (x[mid] > k)
            return binary_search(x, left, mid - 1, k);
        else
            return binary_search(x, mid + 1, right, k);
    }
}

int main() {
    int x[] = {4, 14, 24, 34, 54, 64, 74, 84, 94};
    int n = sizeof(x) / sizeof(x[0]);

    int k;
    cout << "Nhap so can tim: ";
    cin >> k;

    int result = binary_search(x, 0, n - 1, k);
    if (result != -1)
        cout << "Tim thay " << k << " o vi tri thu " << result << " trong mang." << endl;
    else
        cout << "Khong tim thay " << k << " trong mang." << endl;

    return 0;
}
