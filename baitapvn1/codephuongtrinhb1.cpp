#include<stdio.h>
int main(){
	float A;
	printf("Nhap A=\n");
	scanf("%f",&A);
    float B;
	printf("Nhap B=\n");
	scanf("%f",&B);
	
	float x;
	if(A==0){
		if(B==0){
			printf("Phuong trinh vo so nghiem");
		}else{
			printf("Phuong trinh vo nghiem");
		}
		
	
	}else{
		x=-B/A;
		printf("X= %f",x);
		
	}
	
}
