#include<stdio.h>

int ucln(int a, int b){
	int gt=1;
	for(int i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
			
			gt=i;
		}
	}
	return gt;
}
	
int main(){
	int x;
	printf("nhap so thu 1: ");
	scanf("%d",&x);
	int y;
	printf("nhap so thu 2: ");
	scanf("%d",&y);
	printf("ucln cua %d va %d la %d",x,y, ucln(x,y));
}

	


