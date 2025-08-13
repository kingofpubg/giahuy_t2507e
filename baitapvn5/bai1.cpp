#include<stdio.h>
int main(){
	int n,s=0,b=0;
	printf("hay nhap 1 so nguyen: ");
	scanf("%d",&n);
	
	for(int a=1;a<=n;a++){
		if(n%a==0){
			b= n/a;
			s=s+b;
		
		}
	}
	printf(" tong  uoc cua %d la %d",n,s);
}
