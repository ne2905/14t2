// Chương trình C++ mô phỏng thuật toán mã hóa RSA (Dịch tiếng Việt hoàn toàn)

#include <bits/stdc++.h> // Thư viện chuẩn

using namespace std;

// Hàm tính (coSo^soMu) mod modulo
int luyThuaModulo(int coSo, int soMu, int modulo) {
    int ketQua = 1;
    coSo = coSo % modulo;
    while (soMu > 0) {
        if (soMu & 1)
            ketQua = (ketQua * 1LL * coSo) % modulo;
        coSo = (coSo * 1LL * coSo) % modulo;
        soMu = soMu / 2;
    }
    return ketQua;
}

// Hàm tìm nghịch đảo modulo của e theo phi
int timNghichDaoModulo(int e, int phi) {
    for (int d = 2; d < phi; d++) {
        if ((e * d) % phi == 1)
            return d;
    }
    return -1;
}

// Hàm sinh khóa RSA: tạo e, d, n
void sinhKhoa(int &e, int &d, int &n) {
    int p = 7919; // Số nguyên tố thứ nhất
    int q = 1009; // Số nguyên tố thứ hai

    n = p * q; // Tính n = p * q
    int phi = (p - 1) * (q - 1); // Tính phi(n)

    // Tìm e sao cho gcd(e, phi) = 1
    for (e = 2; e < phi; e++) {
        if (__gcd(e, phi) == 1)
            break;
    }

    // Tính d là nghịch đảo modulo của e
    d = timNghichDaoModulo(e, phi);
}

// Hàm mã hóa thông điệp gốc M
int maHoa(int thongDiepGoc, int e, int n) {
    return luyThuaModulo(thongDiepGoc, e, n);
}

// Hàm giải mã bản mã C
int giaiMa(int banMa, int d, int n) {
    return luyThuaModulo(banMa, d, n);
}

// Chương trình chính
int main() {
    int e, d, n; // e: số mũ công khai, d: số mũ bí mật, n: modulus

    // Sinh khóa RSA
    sinhKhoa(e, d, n);

    // In ra khóa công khai và khóa bí mật
    cout << "🔓 Khóa công khai (e, n): (" << e << ", " << n << ")\n";
    cout << "🔐 Khóa bí mật (d, n): (" << d << ", " << n << ")\n";

    // Thông điệp cần mã hóa
    int thongDiepGoc = 123;
    cout << "thông điệp gốc: " << thongDiepGoc << endl;

    // Mã hóa thông điệp
    int banMa = maHoa(thongDiepGoc, e, n);
    cout << "Thông điệp sau mã hóa: " << banMa << endl;

    // Giải mã bản mã
    int thongDiepGiaiMa = giaiMa(banMa, d, n);
    cout << "Thông điệp sau giải mã: " << thongDiepGiaiMa << endl;

    return 0;
}
