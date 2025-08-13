#include <stdio.h>

int main() {
    int n;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    int i = 1; 
    for ( ; n > 0; n /= 10) {
        int x = n % 10; // x la chu so cuoi cua n dc lay ra sau moi vong lap
        if (x % 2 == 0) { // neu d la 1 so chan thì dung` va ket luan sai luon
            i = 0;
            break;
        }
    }

    if (i != 0){
    	printf("la so nguyen duong co toan chu so le\n");
	}else{
		printf("la so nguyen duong khong phai toan chu so le\n");
	}
       
    return 0;
}
