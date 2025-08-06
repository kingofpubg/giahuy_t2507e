#include<stdio.h>
int main(){
	float A;
	printf("nhap A=\n");
	scanf("%f",&A);
	float x=A-11;
	float x1,x2,x3,x4,x5,x6;
	float t1,t2,t3,t4,t5,t6,t7;
	t1= x*0.05;
	x1=x-5;
	t2= t1+ x1*0.1;
	x2=x1-8;
	t3= t1+t2+x2*0.15;
	x3=x2-14;
	t4=t1+t2+t3+x3*0.2;
	x4=x3-20;
	t5=t1+t2+t3+t4+x4*0.25;
	x5=x4-28;
	t6=t1+t2+t3+t4+t5+x4*0.3;
	x6=x5-80;
	t7=t1+t2+t3+t4+t5+t6+x6*0.35;
	
	if(A<11){
		printf(" Khong phai dong thue");
	}else{
		if(x<=5){
			
			printf("Tien thue phai dong la t1=%f", t1);
		}else{
			if(x<=10){
				
				printf(" tien thue phai dong la t2=%f", t2);
			}else{
				if(x<=18){
					
					printf("tien thue phai dong la t3=%f", t3);
				}else{
					if(x<=32){
						
						printf("tien thue phai dong la t4=%f", t4);
					}else{
						if(x<=52){
							
							printf("tien thue phai dong la t5=%f", t5);
						}else{
							if(x<=80){
								
								printf("tien thue phai dong la t6=%f", t6);
							}else{
								
								printf("tien thue phai dong la t7=%f",t7);
							}
						}
					}
				}
			}
		}
	}
}
