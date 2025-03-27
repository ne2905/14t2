#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int timSoPhanTu(vector<int> &a, int s) {
    sort(a.rbegin(), a.rend());

    int p = 0, count = 0;
    for (int i = 0; i < a.size(); i++) {
        p += a[i];
        count++;
        if (p > s) {
            return count;
        }
    }
    return -1;
}

int main() {
    int n, s;
    cout << "Nhập số phần tử của dãy: ";
    cin >> n;
    
    vector<int> a(n);
    cout << "Nhập các phần tử của dãy: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Nhập giá trị s: ";
    cin >> s;

    int result = timSoPhanTu(a, s);
    if (result != -1) {
        cout << "Số phần tử ít nhất cần lấy để tổng lớn hơn " << s << " là: " << result << endl;
    } else {
        cout << "Không thể đạt tổng lớn hơn " << s << "." << endl;
    }

    return 0;
}
