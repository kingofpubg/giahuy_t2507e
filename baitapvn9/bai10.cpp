#include <stdio.h>


void daoNguocMang(int arr[], int n) {
    int i, tmp;
    for (i = 0; i < n / 2; i++) {
        tmp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = tmp;
    }
}


void inMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int player[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap player[%d]: ", i);
        scanf("%d", &player[i]);
    }

    printf("Mang truoc khi dao nguoc: ");
    inMang(player, n);

    daoNguocMang(player, n);

    printf("Mang sau khi dao nguoc: ");
    inMang(player, n);

    return 0;
}
