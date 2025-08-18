#include <stdio.h>
#include <stdlib.h> 

int main() {
    int n, x;
    printf("Nhap so: ");
    scanf("%d", &n);

    int player[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap player[%d]: ", i);
        scanf("%d", &player[i]);
    }

    printf("Nhap so nguyen x: ");
    scanf("%d", &x);

    int max = abs(player[0] - x);
    int a = player[0];

    
    for (int i = 1; i < n; i++) {
        int b = abs(player[i] - x);
        if (b > max) {
            max = b;
            a = player[i];
        }
    }

    printf("Gia tri trong mang xa %d nhat la: %d\n", x, a);

    return 0;
}
