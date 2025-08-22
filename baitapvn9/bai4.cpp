#include <stdio.h>

int mu(int a, int b){
	int s=1;
	for(int i =1;i<=b;i++){
		s=s*a; // s*=a
	}
	return s;
}

int main(){
	int x;
	printf("nhap so thu nhat: ");
	scanf("%d",&x);
	int y;
	printf("nhao so thu hai: ");
	scanf("%d",&y);
	printf("ham tinh %d^%d la %d", x,y, mu(x,y));
}

