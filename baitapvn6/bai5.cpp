#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen: ");
    scanf("%d", &n);
    
    int player[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap player[%d]: ", i);
        scanf("%d", &player[i]);	
    }
    
    int min = player[0];
    for (int i = 1; i < n; i++) { 
        if (player[i] < min) {
            min = player[i];
        }
    }
    printf("So duong nho nhat la: %d\n", min);
    
    return 0;
}
