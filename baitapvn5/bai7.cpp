#include <stdio.h>

int main() {
    int a;
    printf("Nhap a:\n ");
    scanf("%d",&a);
    int b;
    printf("Nhap b:\n ");
    scanf("%d",&b);

    if (a > b || a <= 1) { 
        printf("loi sai a,b nhap lai:\n");
        return 0;
    }

    printf("Cac so nguyen to trong khoang %d den %d là:\n", a, b);

    for (int i = a; i <= b; i++) {
        int x = 1; // coi x la so nguyen to nam trong khoan a<x<b, gan x =1 la 1 so nguyen to
        for (int j = 2; j <= i/j; j++) { // j <= i/j la neu j> i/j thì uoc con lai se <j, ta da kiem tra truoc do
            if (i % j == 0) {
                x = 0; // tim thay uoc khac 1 va chinh no thi gan x=0 va` dung` luon
                break;
            }
        }
        if (x != 0) {
            printf("%d ", i);
        }
    }
    

    return 0;
}
