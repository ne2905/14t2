void bubbleSortByAge(Student ds[], int n) {
    int currentYear = 2025; // Năm hiện tại (theo ngày 10/04/2025)
    for (int i = 0; i <  n - 1; i++) {
        for (int j = n - 1; j > i; j--) {
            int tuoiJ = currentYear - ds[j].namSinh;
            int tuoiJ_1 = currentYear - ds[j - 1].namSinh;
            if (tuoiJ < tuoiJ_1) { // Sắp xếp tăng dần theo tuổi
                Student tg = ds[j];
                ds[j] = ds[j - 1];
                ds[j - 1] = tg;
            }
        }
    }
}

// Hàm Insertion Sort theo điểm tổng kết (giảm dần)
void insertionSortByScore(Student ds[], int n) {
    for (int i = 1; i < n; i++) {
        Student tam = ds[i];
        int j = i - 1;
        while (j >= 0 && ds[j].diemTongKet < tam.diemTongKet) { // Sắp xếp giảm dần theo điểm
            ds[j + 1] = ds[j];
            j--;
        }
        ds[j + 1] = tam;
    }
}

int main() {
    int n;
    cout << "Nhap so luong hoc sinh: ";
    cin >> n;

    // Khởi tạo danh sách học sinh
    Student* ds = new Student[n];

    // Nhập danh sách học sinh
    nhapDanhSach(ds, n);

    // Hiển thị danh sách ban đầu
    cout << "\nDanh sach ban dau:\n";
    hienThiDanhSach(ds, n);

    // 1. Sắp xếp theo tên (tăng dần) bằng Selection Sort
    selectionSortByName(ds, n);
    cout << "\nDanh sach sau khi sap xep theo ten (tang dan):\n";
    hienThiDanhSach(ds, n);

    // 2. Sắp xếp theo tuổi (tăng dần) bằng Bubble Sort
    bubbleSortByAge(ds, n);
    cout << "\nDanh sach sau khi sap xep theo tuoi (tang dan):\n";
    hienThiDanhSach(ds, n);

    // 3. Sắp xếp theo điểm tổng kết (giảm dần) bằng Insertion Sort
    insertionSortByScore(ds, n);
    cout << "\nDanh sach sau khi sap xep theo diem tong ket (giam dan):\n";
    hienThiDanhSach(ds, n);

    // Giải phóng bộ nhớ
    delete[] ds;

    return 0;
}
