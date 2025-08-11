#include<stdio.h>
int main(){
	int a=1, n;
	printf("nhap so nguyen\n");
	scanf("%d",&n);
	int s=0;
	while(a<n){
		if(n%a==0){
			s=s+a;
		}
		a++;
	}
	if(s==n){
		printf("%d la so hoan hao",n);
	}else{
		printf("%d khong la so hoan hao",n);
	}
}
