#include <stdio.h>

int tongchuso(int a){
	int s=0;
	while (a != 0) {
        s =s + a % 10; 
        a /= 10;       
    }
    return s;
}

int main(){
	int n;
	printf("nhap so :");
	scanf("%d",&n);
	printf("tong cac chu so cua so %d la %d: ",n,tongchuso(n));
}
