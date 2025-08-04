#include<stdio.h>
int main(){
	float A;
	printf("Nhap A =\n");
	scanf("%f",&A);
	float x;
	if(A<=50){
		x=A*1.678;
		printf("X=%f",x);
	}else{
		if(A<=100){
			x=A*1.734;
			printf("X=%f",x);
		}else{
			if(A<=200){
				x=A*2.014;
				printf("X=%f",x);
			}else{
				x=A*2.536;
				printf("X=%f",x);
			}
		}
	}
}
	
