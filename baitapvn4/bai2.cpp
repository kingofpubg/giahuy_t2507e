#include<stdio.h>
int main(){
	int n, a;
	printf("nhap so nguyen\n");
	scanf("%d",&n);
	int b;
	a=1;

	while(a<n){
		if(a%6==0){
			b=a;	
		}
		a++;
	}
	printf("so lon nhat nho hon n chia het cho 2 va 3 la %d\n",b);
}
