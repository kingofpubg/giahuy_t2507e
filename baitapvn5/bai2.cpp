#include <stdio.h>
#include<math.h>
int main(){
	int a;
	printf("hay nhap 1 so nguyen: ");
	scanf("%d",&a);
	int b;
	printf("hay nhap 1 so nguyen: ");
	scanf("%d",&b);
	int ucln;
	
	// i la ucln cua a va b
	for(int i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
			
			ucln=i;
		}
	}
	printf("uoc chung lon nhat la %d\n",ucln);
	
	int bcnn = abs(a/ucln*b);
	printf("boi chung nho nhat la %d",bcnn);
}
