#include <stdio.h>

int main() {
    int n, s = 0;
    printf("Nhap so nguyen n: ");
    scanf("%d", &n);

    
    
    while (n != 0) {
        s =s + n % 10; 
        n /= 10;       
    }

    printf("tong cac chu so cua %d = %d\n",n, s);
    return 0;
}
