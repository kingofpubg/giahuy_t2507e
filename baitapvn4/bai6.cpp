#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("F%d = 0\n", n);
    } else if (n == 1) {
        printf("F%d = 1\n", n);
    } else {
        int a = 0, b = 1, i = 2, fibo; //a la F(n-2) , b la F(n-1)
        while (i <= n) {
            fibo = a + b; 
            a = b; // a moi = b cu
            b = fibo; // b moi se la so n hien tai
            i++;
        }
        printf("F%d = %d\n", n, b);
    }

    return 0;
}
