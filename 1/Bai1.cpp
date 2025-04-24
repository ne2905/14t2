#include <stdio.h>

int search(int x[], int n, int k) {
    int i = 0;
    while (i < n && x[i] != k)
        i++;
    if (i < n)
        return i;
    else
        return -1;
}

void bai1() {
    int x[] = {34, 14, 24, 54, 84, 64, 94, 74, 4};
    int n = sizeof(x) / sizeof(x[0]);

    int k1 = 94, k2 = 55;
    int pos1 = search(x, n, k1);
    int pos2 = search(x, n, k2);

    printf("Bai 1:\n");
    if (pos1 != -1)
        printf("Tim thay %d tai vi tri %d\n", k1, pos1);
    else
        printf("Khong tim thay %d\n", k1);

    if (pos2 != -1)
        printf("Tim thay %d tai vi tri %d\n", k2, pos2);
    else
        printf("Khong tim thay %d\n", k2);
}
