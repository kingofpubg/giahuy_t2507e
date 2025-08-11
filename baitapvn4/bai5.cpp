#include <stdio.h>

int main() {
    int n, a = 2;

    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("%d khong phai so nguyen to\n", n);
    } else {
        while (a * a <= n) {
            if (n % a == 0) {
                printf("%d khong phai so nguyen to\n", n);
                return 0; // dung` kiem tra neu n chia cho 1 so khac no 
            }
            a++;
        }
        printf("%d la so nguyen to\n", n);
    }

    return 0;
}
