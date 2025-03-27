#include <iostream>
using namespace std;

void doiTien(int m) {
    int menhGia[] = {10000, 5000, 2000, 1000, 500};
    int soTo[5] = {0};

    for (int i = 0; i < 5; i++) {
        soTo[i] = m / menhGia[i];
        m %= menhGia[i];
    }

    if (m > 0) {
        cout << "Không thể đổi đủ số tiền." << endl;
    } else {
        cout << "Số tờ tiền cần dùng:" << endl;
        for (int i = 0; i < 5; i++) {
            if (soTo[i] > 0) {
                cout << menhGia[i] << "đ: " << soTo[i] << " tờ" << endl;
            }
        }
    }
}

int main() {
    int m;
    cout << "Nhập số tiền cần đổi: ";
    cin >> m;
    doiTien(m);
    return 0;
}
