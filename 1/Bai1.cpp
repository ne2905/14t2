#include <iostream>
#include <string>
using namespace std;

/* Cấu trúc sinh viên */
struct SinhVien {
    string maSV;
    string hoDem;
    string ten;
    string gioiTinh;
    int namSinh;
    float diemTK;
};

/* Node của danh sách liên kết */
struct Node {
    SinhVien data;
    Node* next;
};

/* Danh sách liên kết */
struct DanhSach {
    Node* head;
};

/* Khởi tạo danh sách */
void khoiTao(DanhSach& ds) {
    ds.head = nullptr;
}

/* Tạo node mới */
Node* taoNode(SinhVien sv) {
    Node* p = new Node;
    p->data = sv;
    p->next = nullptr;
    return p;
}

/* Thêm sinh viên vào cuối danh sách */
void themCuoi(DanhSach& ds, SinhVien sv) {
    Node* p = taoNode(sv);
    if (ds.head == nullptr) {
        ds.head = p;
        return;
    }
    Node* q = ds.head;
    while (q->next != nullptr) {
        q = q->next;
    }
    q->next = p;
}

/* Xóa phần tử đầu tiên */
void xoaDau(DanhSach& ds) {
    if (ds.head == nullptr) return;
    Node* p = ds.head;
    ds.head = ds.head->next;
    delete p;
}

/* Chèn sinh viên vào vị trí pos (bắt đầu từ 1) */
void chenViTri(DanhSach& ds, SinhVien sv, int pos) {
    Node* p = taoNode(sv);
    if (pos == 1) {
        p->next = ds.head;
        ds.head = p;
        return;
    }
    Node* q = ds.head;
    for (int i = 1; i < pos - 1 && q != nullptr; i++) {
        q = q->next;
    }
    if (q == nullptr) return;
    p->next = q->next;
    q->next = p;
}

/* Sắp xếp danh sách theo tên tăng dần (Selection Sort) */
void sapXepTheoTen(DanhSach& ds) {
    for (Node* p = ds.head; p != nullptr; p = p->next) {
        Node* minNode = p;
        for (Node* q = p->next; q != nullptr; q = q->next) {
            if (q->data.ten < minNode->data.ten) {
                minNode = q;
            }
        }
        if (minNode != p) {
            SinhVien temp = p->data;
            p->data = minNode->data;
            minNode->data = temp;
        }
    }
}

/* Hiển thị danh sách sinh viên */
void hienThi(DanhSach ds) {
    Node* p = ds.head;
    while (p != nullptr) {
        cout << p->data.maSV << " | "
             << p->data.hoDem << " "
             << p->data.ten << " | "
             << p->data.gioiTinh << " | "
             << p->data.namSinh << " | "
             << p->data.diemTK << endl;
        p = p->next;
    }
}

int main() {
    DanhSach ds;
    khoiTao(ds);

    themCuoi(ds, {"SV1001", "Tran Van", "Thanh", "Nam", 1999, 7.5});
    themCuoi(ds, {"SV1002", "Nguyen Thi", "Huong", "Nu", 2000, 7.3});
    themCuoi(ds, {"SV1003", "Nguyen Van", "Binh", "Nam", 1998, 6.4});
    themCuoi(ds, {"SV1004", "Bui Thi", "Hong", "Nu", 2000, 5.8});
    themCuoi(ds, {"SV1005", "Duong Van", "Giang", "Nam", 1998, 8.3});

    xoaDau(ds);

    chenViTri(ds, {"SV1006", "Le Thi", "Doan", "Nu", 1998, 7.6}, 3);

    sapXepTheoTen(ds);

    hienThi(ds);

    return 0;
}
