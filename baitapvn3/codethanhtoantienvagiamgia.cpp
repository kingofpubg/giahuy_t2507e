#include <stdio.h>
int main(){
	float a;
	printf("Gia tien mon hang:");
	scanf("%f",&a);
	float b;
	// b la so tien phai thanh toan
	if(a<=0){
		printf("Sai du lieu, nhap lai!!!");
	}else if(a>=500){
		b= a- a*0.1;
		printf("So tien can thanh toan la %f",b);
	}else if(a>=200){
		b= a- a*0.05;
		printf("So tien can thanh toan la %f",b);
    }else{
    	printf("So tien can thanh toan la %f",a);
	}
}
