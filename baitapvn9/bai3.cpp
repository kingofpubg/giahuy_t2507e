#include <stdio.h>
#include<math.h>

int ucln(int a, int b){
	int gt=1;
	for(int i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
			
			gt=i;
		}
	}
	return gt;
}
int bcnn(int a, int b){
	return abs((a*b)/ucln(a,b));
}



int main(){
	int x;
	printf("nhap so thu 1: ");
	scanf("%d",&x);
	int y;
	printf("nhap so thu 2: ");
	scanf("%d",&y);
	printf("bcnn cua %d va %d la %d",x,y, bcnn(x,y));
}
