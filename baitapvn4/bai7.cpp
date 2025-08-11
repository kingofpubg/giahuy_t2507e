#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int a = 0, b = 1; // F0 la a và F1 la b

    
    while (b <= n) {
        int fibo = a + b;
        a = b;
        b = fibo;
    }

    // Sau vòng l?p, a là s? Fibonacci l?n nh?t <= n
    printf("So tiem can duoi trong day Fibonacci la: %d\n", a);

    return 0;
}
