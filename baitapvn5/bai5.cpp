#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    int sln = 0; // sln la so lon nhat, khai bao = 0, khai bao =1 se chay sai
    for ( ;n > 0;n/=10) {
        int x = n % 10; // x la so cuoi cung cua n sau moi vòng loai bo
        if (x > sln) {
            sln = x; 
            if (sln == 9) 
			break; // 9 la so lon nhat, dung` luon chuong trinh
        }
        
    }

    printf("Chu so lon nhat la: %d\n",sln);
    return 0;
}
