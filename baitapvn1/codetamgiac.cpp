#include<stdio.h>
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
	
	if(A+B>C){
		printf("la tam giac");
	}else{
		printf("khong la tam giac");
	}
	if(A+C>B){
		printf("la tam giac");
	}else{
		printf("khong la tam giac");
	}
	if(B+C>A){
		printf("la tam giac");
	}else{
		printf("khong la tam giac");
	}
}
