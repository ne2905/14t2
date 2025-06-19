#include <bits/stdc++.h> // Thư viện chuẩn C++
using namespace std;

// Hàm kiểm tra số nguyên tố đơn giản
bool laNguyenTo(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0) return false;
    return true;
}

// Hàm tính (cơ số ^ số mũ) mod modulo
int luyThuaModulo(int coSo, int soMu, int modulo) {
    int ketQua = 1;
    coSo = coSo % modulo;
    while (soMu > 0) {
        if (soMu & 1)
            ketQua = (1LL * ketQua * coSo) % modulo;
        coSo = (1LL * coSo * coSo) % modulo;
        soMu = soMu / 2;
    }
    return ketQua;
}

// Hàm tìm nghịch đảo modulo của e theo phi (thử từ 2 đến phi)
int timNghichDaoModulo(int e, int phi) {
    for (int d = 2; d < phi; d++) {
        if ((1LL * e * d) % phi == 1)
            return d;
    }
    return -1; // Không tìm được
}

// Hàm sinh khóa RSA: nhập p, q, tạo e, d, n
void sinhKhoa(int &e, int &d, int &n) {
    int p, q;

    // Nhập và kiểm tra số nguyên tố p
    do {
        cout << "🔢 Nhập số nguyên tố p: ";
        cin >> p;
        if (!laNguyenTo(p)) cout << "⚠️ p không phải là số nguyên tố. Vui lòng nhập lại.\n";
    } while (!laNguyenTo(p));

    // Nhập và kiểm tra số nguyên tố q
    do {
        cout << "🔢 Nhập số nguyên tố q (khác p): ";
        cin >> q;
        if (!laNguyenTo(q) || q == p) cout << "⚠️ q không hợp lệ. Vui lòng nhập lại.\n";
    } while (!laNguyenTo(q) || q == p);

    n = p * q;
    int phi = (p - 1) * (q - 1);

    // Tìm e sao cho gcd(e, phi) = 1
    for (e = 2; e < phi; e++) {
        if (__gcd(e, phi) == 1)
            break;
    }

    // Tìm d là nghịch đảo của e mod phi
    d = timNghichDaoModulo(e, phi);
    if (d == -1) {
        cout << "❌ Không tìm được nghịch đảo modular. Kết thúc chương trình.\n";
        exit(1);
    }
}

// Hàm mã hóa thông điệp gốc
int maHoa(int thongDiepGoc, int e, int n) {
    return luyThuaModulo(thongDiepGoc, e, n);
}

// Hàm giải mã bản mã
int giaiMa(int banMa, int d, int n) {
    return luyThuaModulo(banMa, d, n);
}

// Hàm main chính
int main() {
    int e, d, n; // e: khóa công khai, d: khóa bí mật, n: modulus

    // Sinh khóa
    sinhKhoa(e, d, n);

    // Hiển thị khóa
    cout << "\n🔓 Khóa công khai (e, n): (" << e << ", " << n << ")\n";
    cout << "🔐 Khóa bí mật (d, n): (" << d << ", " << n << ")\n";

    // Nhập thông điệp cần mã hóa
    int thongDiepGoc;
    do {
        cout << "📨 Nhập thông điệp gốc (số nguyên < " << n << "): ";
        cin >> thongDiepGoc;
        if (thongDiepGoc >= n) cout << "⚠️ Thông điệp quá lớn. Nhập lại.\n";
    } while (thongDiepGoc >= n);

    // Mã hóa và giải mã
    int banMa = maHoa(thongDiepGoc, e, n);
    int thongDiepGiaiMa = giaiMa(banMa, d, n);

    // In kết quả
    cout << "🔒 Bản mã (sau mã hóa): " << banMa << endl;
    cout << "📬 Thông điệp sau giải mã: " << thongDiepGiaiMa << endl;

    return 0;
}
