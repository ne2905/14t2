#include <bits/stdc++.h>
using namespace std;

struct SinhVien {
    char maSV[10];
    char hoDem[25];
    char ten[15];
    char gioiTinh[5];
    double diemTK;
};

struct Node {
    SinhVien info;
    Node* next;
};

typedef Node* Tro;

void create(Tro& L) {
    L = NULL;
}

int empty(Tro L) {
    return L == NULL;
}

SinhVien taosv(const char* maSV, const char* hoDem, const char* ten, const char* gioiTinh, double diemTK) {
    SinhVien sv;
    strcpy(sv.maSV, maSV);
    strcpy(sv.hoDem, hoDem);
    strcpy(sv.ten, ten);
    strcpy(sv.gioiTinh, gioiTinh);
    sv.diemTK = diemTK;
    return sv;
}

void add(Tro& L, SinhVien sv) {
    Tro P = new Node{sv, NULL};
    if (empty(L)) {
        L = P;
    } else {
        Tro Q = L;
        while (Q->next != NULL) Q = Q->next;
        Q->next = P;
    }
}

void display(SinhVien sv) {
    cout << left << setw(10) << sv.maSV
         << setw(15) << sv.hoDem
         << setw(10) << sv.ten
         << setw(8) << sv.gioiTinh
         << fixed << setprecision(1) << sv.diemTK << endl;
}

void hienthi_ds(Tro L) {
    Tro Q = L;
    while (Q != NULL) {
        display(Q->info);
        Q = Q->next;
    }
}

void xoa_ten_Ha(Tro& L) {
    while (L && strcmp(L->info.ten, "Hà") == 0) {
        Tro tam = L;
        L = L->next;
        delete tam;
    }

    Tro Q = L;
    while (Q && Q->next) {
        if (strcmp(Q->next->info.ten, "Hà") == 0) {
            Tro tam = Q->next;
            Q->next = tam->next;
            delete tam;
        } else {
            Q = Q->next;
        }
    }
}

void tim_kiem_Binh_va_Ha(Tro L) {
    Tro Q = L;
    while (Q) {
        if (strcmp(Q->info.ten, "Bình") == 0 || strcmp(Q->info.ten, "Hà") == 0) {
            display(Q->info);
        }
        Q = Q->next;
    }
}

void sap_xep_bubble(Tro& L) {
    if (!L || !L->next) return;
    bool swapped;
    do {
        swapped = false;
        Tro p = L;
        while (p->next) {
            if (strcmp(p->info.ten, p->next->info.ten) > 0) {
                swap(p->info, p->next->info);
                swapped = true;
            }
            p = p->next;
        }
    } while (swapped);
}

void tao_ds(Tro& L) {
    add(L, taosv("SV1001", "Trần Hồng", "Quân", "Nam", 8.0));
    add(L, taosv("SV1002", "Nguyễn Thu", "Lan", "Nữ", 6.8));
    add(L, taosv("SV1003", "Nguyễn Văn", "Bình", "Nam", 6.4));
    add(L, taosv("SV1004", "Bùi Thị", "Hà", "Nữ", 7.3));
    add(L, taosv("SV1005", "Trần Hoài", "Sơn", "Nam", 8.9));
}

int main() {
    Tro L;
    create(L);
    tao_ds(L);

    cout << "Danh sach ban dau:\n";
    hienthi_ds(L);

    xoa_ten_Ha(L);
    cout << "\nDanh sach sau khi xoa SV ten 'Hà':\n";
    hienthi_ds(L);

    cout << "\nThong tin SV ten 'Bình' va 'Hà':\n";
    tim_kiem_Binh_va_Ha(L);

    sap_xep_bubble(L);
    cout << "\nDanh sach sau khi sap xep theo ten:\n";
    hienthi_ds(L);

    return 0;
}
