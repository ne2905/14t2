#include <iostream>
using namespace std;

int m[100], v[100], stt[100];
int dp[100][1000];

int n, C, M;

void sapXepGiam() {
    for (int i = 0; i < n - 1; i++) {
        int max = i;

        for (int j = i + 1; j < n; j++) {
            if (m[j] > m[max])
                max = j;
        }

        int t;

        t = m[i];
        m[i] = m[max];
        m[max] = t;

        t = v[i];
        v[i] = v[max];
        v[max] = t;

        t = stt[i];
        stt[i] = stt[max];
        stt[max] = t;
    }
}

void thamLam() {
    int tong = 0;
    int D = 0;

    for (int i = 0; i < n; i++) {
        if (tong + m[i] <= C) {
            tong += m[i];
            D++;

            if (tong == C)
                break;
        }
    }

    cout << "\n===== THUAT TOAN THAM LAM =====\n";

    if (tong == C) {
        cout << "D = " << D << endl;

        cout << "Cac goi hang duoc chon: ";

        tong = 0;

        for (int i = 0; i < n; i++) {
            if (tong + m[i] <= C) {
                tong += m[i];

                cout << stt[i] << " ";

                if (tong == C)
                    break;
            }
        }

        cout << endl;
        cout << "Tong khoi luong = " << tong << endl;
    }
    else {
        cout << "Khong co phuong an!" << endl;
    }
}

void quyHoachDong() {
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= M; j++) {
            dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= M; j++) {

            dp[i][j] = dp[i - 1][j];

            if (j >= m[i - 1]) {
                int x = dp[i - 1][j - m[i - 1]]
                        + v[i - 1];

                if (x > dp[i][j])
                    dp[i][j] = x;
            }
        }
    }

    cout << "\n===== QUY HOACH DONG =====\n";

    cout << "P = " << dp[n][M] << endl;

    cout << "Cac goi hang duoc chon: ";

    int j = M;

    for (int i = n; i >= 1; i--) {
        if (dp[i][j] != dp[i - 1][j]) {
            cout << stt[i - 1] << " ";
            j -= m[i - 1];
        }
    }

    cout << endl;
}

int main() {

    cout << "===== BAI TOAN GOI HANG =====\n";

    cout << "Nhap so luong goi hang n: ";
    cin >> n;

    cout << "\nNhap khoi luong va gia tri cua tung goi hang:\n";

    for (int i = 0; i < n; i++) {
        cout << "Goi hang " << i + 1 << ": ";
        cin >> m[i] >> v[i];

        stt[i] = i + 1;
    }

    cout << "\nNhap C: ";
    cin >> C;

    cout << "Nhap M: ";
    cin >> M;

    sapXepGiam();

    thamLam();

    quyHoachDong();

    return 0;
}
