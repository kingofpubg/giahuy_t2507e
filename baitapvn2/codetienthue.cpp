#include <stdio.h>
int main(){
	float tn, ct, t;
	printf("thu nhap cua ban:");
	scanf("%f",&tn);
	ct = tn - 11;
	if(ct <=5){
		t = ct * 0.05;
	}else if(ct <= 10){
		t = 5 * 0.05 + (ct-5)*0.1;
	}else if(ct <= 18){
		t = 5 * 0.05 + 5*0.1 + (ct-10)*0.15;
	}else if(ct <=32){
		t = 5 * 0.05 +5*0.1+ 8 * 0.15+ (ct-18)*0.2;
	}else if(ct <= 52){
		t= 5*0.05+ 5*0.1 + 8*0.15 + 14*0.2 + (ct-32)*0.25;
	}else if(ct <=80){
		t= 5*0.05+ 5*0.1 + 8*0.15 + 14*0.2 + 20 *0.25 + (ct-52)*0.3;
	}else{
		t= 5*0.05+ 5*0.1 + 8*0.15 + 14*0.2 + 20 *0.25 + 28*0.3 + (ct-80)*0.35;
	}
	printf("tien thue phai nop: %f",t);
}
