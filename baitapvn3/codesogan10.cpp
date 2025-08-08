#include <stdio.h>
#include<math.h>
int main(){
	int a;
	printf("nhap so thu nhat:");
	scanf("%d",&a);
	int b;
	printf("nhap so thu hai:");
	scanf("%d",&b);
	int c,d;
	c= abs(a-10);
	d= abs(b-10);
	// c la khoang cach tu a den 10
	// d la khoang canh tu b den 10
	if(c<d){
		printf("so gan 10 hon la %d",a);
	} else if(c>d){
		printf("so gan 10 hon la %d",b);
	}else{
		printf("bang nhau");
	}
}
