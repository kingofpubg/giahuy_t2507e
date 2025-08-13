#include <stdio.h>

int main() {
    int n;
    printf("nhap so nguyen duong n: ");
    scanf("%d", &n);

    while (n >= 10) {
        n /= 10; //bo chu so cuoi cung, chi lay so dau tien cua n la gia tri n<10
    }

    printf("Chu so dau tien là: %d\n", n);
    return 0;
}
