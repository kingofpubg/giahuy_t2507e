#include<stdio.h>
int main(){
	int a=1, n;
	printf("nhap so nguyen\n");
	scanf("%d",&n);
	while(a<n){
		if(a%2 != 0){
			printf("so le nho hon n la %d\n",a);
		}
		a++;
	}
}
