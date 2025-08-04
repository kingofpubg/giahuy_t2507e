#include<stdio.h>
#include<math.h>
int main(){
	float A;
	printf("nhap A=\n");
	scanf("%f",&A);
	float B;
	printf("nhap B=\n");
	scanf("%f",&B);
	float C;
	printf("nhap C=\n");
	scanf("%f",&C);
	float D= B*B - 4*A*C;
	float x;
	float x1;
	float x2;
	
	if(A==0){
		if(B==0){
			if(C==0){
				printf("Phuong trinh vo so nghiem");
			}else{
				printf("Phuong trinh vo nghiem");
			}
		}else{
			x=-C/B;
			printf("X=%f",x);
		}
	}else{
		if(D<0){
			printf("Phuong trinh vo nghiem");
		}else{
			if(D==0){
				x=-B/(2*A);
				printf("Phuong trinh co nghiem kep X= %f", x);
			}else{
				x1 = (-B+ sqrt(D))/(2*A);
				x2 = (-B- sqrt(D))/(2*A);
				printf("Phuong trinh co 2 nghiem x1= %f", x1);
				printf("Phuong trinh co 2 nghiem x2= %f", x2);
			}
		}
	}
}
