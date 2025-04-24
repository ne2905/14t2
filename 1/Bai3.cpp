#include <string.h>

struct HocSinh {
    char hoTen[50];
    char gioiTinh[10];
    int namSinh;
    float diemTongKet;
};

int timTheoTenVaDiem(struct HocSinh ds[], int n, char ten[], float diem) {
    for (int i = 0; i < n; i++) {
        if (strcmp(ds[i].hoTen, ten) == 0 && ds[i].diemTongKet == diem)
            return i;
    }
    return -1;
}

int timTheoDiem(struct HocSinh ds[], int left, int right, float diem) {
    if (left > right)
        return -1;
    int mid = (left + right) / 2;
    if (ds[mid].diemTongKet == diem)
        return mid;
    else if (ds[mid].diemTongKet < diem) // danh sách giảm dần
        return timTheoDiem(ds, left, mid - 1, diem);
    else
        return timTheoDiem(ds, mid + 1, right, diem);
}

void bai3() {
    struct HocSinh ds[5] = {
        {"Nguyen Van A", "Nam", 2005, 9.5},
        {"Tran Thi B", "Nu", 2006, 8.8},
        {"Le Van C", "Nam", 2004, 8.0},
        {"Pham Thi D", "Nu", 2005, 7.5},
        {"Do Van E", "Nam", 2006, 7.0}
    };
    int n = 5;

    printf("\nBai 3:\n");

    int pos1 = timTheoTenVaDiem(ds, n, "Tran Thi B", 8.8);
    if (pos1 != -1)
        printf("Tim thay hoc sinh theo ten va diem tai vi tri %d: %s\n", pos1, ds[pos1].hoTen);
    else
        printf("Khong tim thay hoc sinh theo ten va diem\n");

    float diemCanTim = 8.0;
    int pos2 = timTheoDiem(ds, 0, n - 1, diemCanTim);
    if (pos2 != -1)
        printf("Tim thay hoc sinh theo diem tai vi tri %d: %s\n", pos2, ds[pos2].hoTen);
    else
        printf("Khong tim thay hoc sinh theo diem %.2f\n", diemCanTim);
}
