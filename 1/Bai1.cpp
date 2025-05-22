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

bool empty(Tro L) {
    return L == NULL;
}

SinhVien taoSV(const char* maSV, const char* hoDem, const char* ten, const char* gioiTinh, double diemTK) {
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
        while (Q->next != NULL)
            Q = Q->next;
        Q->next = P;
    }
}

void display(SinhVien sv) {
    cout << setw(8) << left << sv.maSV
         << setw(15) << sv.hoDem
         << setw(10) << sv.ten
         << setw(6) << sv.gioiTinh
         << fixed << setprecision(1) << sv.diemTK << endl;
}

void htds(Tro L) {
    Tro Q = L;
    while (Q != NULL) {
        display(Q->info);
        Q = Q->next;
    }
}

void taoDS(Tro& L) {
    add(L, taoSV("SV1001", "Tran Hong", "Quan", "Nam", 8.0));
    add(L, taoSV("SV1002", "Nguyen Thu", "Lan", "Nu", 6.8));
    add(L, taoSV("SV1003", "Nguyen Van", "Binh", "Nam", 6.4));
    add(L, taoSV("SV1004", "Bui Thi", "Ha", "Nu", 7.3));
    add(L, taoSV("SV1005", "Tran Hoai", "Son", "Nam", 8.9));
}

void xoa_sv_ten(Tro& L, const char* ten) {
    while (L != NULL && strcmp(L->info.ten, ten) == 0) {
        Tro tmp = L;
        L = L->next;
        delete tmp;
    }
    Tro Q = L;
    while (Q != NULL && Q->next != NULL) {
        if (strcmp(Q->next->info.ten, ten) == 0) {
            Tro tmp = Q->next;
            Q->next = Q->next->next;
            delete tmp;
        } else {
            Q = Q->next;
        }
    }
}

void tim_kiem(Tro L, const char* ten1, const char* ten2) {
    Tro Q = L;
    while (Q != NULL) {
        if (strcmp(Q->info.ten, ten1) == 0 || strcmp(Q->info.ten, ten2) == 0) {
            display(Q->info);
        }
        Q = Q->next;
    }
}

void swap(SinhVien& a, SinhVien& b) {
    SinhVien temp = a;
    a = b;
    b = temp;
}

void bubbleSort(Tro& L) {
    if (L == NULL || L->next == NULL) return;
    bool swapped;
    do {
        swapped = false;
        Tro p = L;
        while (p->next != NULL) {
            if (p->info.diemTK > p->next->info.diemTK) {
                swap(p->info, p->next->info);
                swapped = true;
            }
            p = p->next;
        }
    } while (swapped);
}

int main() {
    Tro L;
    create(L);
    taoDS(L);

    cout << "Danh sach ban dau:\n";
    htds(L);

    xoa_sv_ten(L, "Ha");
    cout << "\nDanh sach sau khi xoa sinh vien ten 'Ha':\n";
    htds(L);

    cout << "\nTim sinh vien ten 'Binh' va 'Lan':\n";
    tim_kiem(L, "Binh", "Lan");

    bubbleSort(L);
    cout << "\nDanh sach sau khi sap xep tang dan theo diemTK:\n";
    htds(L);

    return 0;
}
