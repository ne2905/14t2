#include <iostream>
#include <string>
using namespace std;

struct Quat
{
    string ten;
    string mau;
    int gia;
};

// ================= KHỞI TẠO =================

void KhoiTao(Quat d[], int& n, int& p)
{
    p = 1000000;
    n = 8;

    d[0] = {"Panasonic", "Xanh", 250000};
    d[1] = {"Senko", "Do", 180000};
    d[2] = {"Asia", "Trang", 300000};
    d[3] = {"Mitsubishi", "Den", 450000};
    d[4] = {"Sharp", "Xam", 350000};
    d[5] = {"KDK", "Xanh", 500000};
    d[6] = {"Toshiba", "Trang", 400000};
    d[7] = {"Hatari", "Den", 280000};
}

// ================= SẮP XẾP =================

// Sắp xếp giá giảm dần
void SapXep(Quat d[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (d[i].gia < d[j].gia)
            {
                Quat temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    }
}

// ================= THAM LAM =================

int BanQuat(Quat d[], int n, int p, Quat ketQua[])
{
    int soQuat = 0;
    int tongTien = 0;

    for (int i = 0; i < n; i++)
    {
        // Chỉ lấy quạt nếu tổng tiền không vượt quá p
        if (tongTien + d[i].gia <= p)
        {
            ketQua[soQuat] = d[i];

            tongTien += d[i].gia;
            soQuat++;
        }
    }

    return soQuat;
}

// ================= MAIN =================

int main()
{
    Quat d[20];
    Quat ketQua[20];

    int n;
    int p;

    // Khởi tạo dữ liệu
    KhoiTao(d, n, p);

    // Sắp xếp theo chiến lược tham lam
    SapXep(d, n);

    // Thực hiện tham lam
    int soQuat = BanQuat(d, n, p, ketQua);

    // In kết quả
    cout << "===== DANH SACH QUAT =====" << endl;

    for (int i = 0; i < soQuat; i++)
    {
        cout << ketQua[i].ten
             << " - "
             << ketQua[i].mau
             << " - "
             << ketQua[i].gia
             << endl;
    }

    // Tính tổng tiền
    int tongTien = 0;

    for (int i = 0; i < soQuat; i++)
    {
        tongTien += ketQua[i].gia;
    }

    cout << endl;
    cout << "So quat da ban: " << soQuat << endl;
    cout << "Tong tien: " << tongTien << endl;
    cout << "Gioi han: " << p << endl;

    return 0;
}
