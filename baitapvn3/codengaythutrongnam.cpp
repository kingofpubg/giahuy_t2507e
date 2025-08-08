#include<stdio.h>
#include<math.h>
int main(){
	int a;
	printf("Nhap Ngày \n");
	scanf("%d",&a);
	int b;
	printf("Nhap Tháng \n");
	scanf("%d",&b);
	int c;
	printf("Nhap Nam \n");
	scanf("%d",&c);
	int nt;
	// nt la ngay thu... trong nam
	if(a<=0 || a>31|| b<=0 || b>12|| c<=0){
		printf("Sai du lieu, nhap lai");
	}else{
		if(b>1){
		nt= a+31;
		printf("Ngay thu %d trong nam",nt);
	}if(b>2){
		if((c % 400 == 0) || (c % 4 == 0 && c % 100 != 0)){
			nt=nt+29;
			printf("Ngay thu %d trong nam",nt);
		}else{
			nt=nt+28;
			printf("Ngay thu %d trong nam",nt);
		}
	}if(b>3){
		nt=nt+31;
		printf("Ngay thu %d trong nam",nt);
	}if(b>4){
		nt=nt+30;
		printf("Ngay thu %d trong nam",nt);
	}if(b>5){
		nt=nt+31;
		printf("Ngay thu %d trong nam",nt);
	}if(b>6){
		nt=nt+30;
		printf("Ngay thu %d trong nam",nt);
	}if(b>7){
		nt=nt+31;
		printf("Ngay thu %d trong nam",nt);
	}if(b>8){
		nt=nt+31;
		printf("Ngay thu %d trong nam",nt);
	}if(b>9){
		nt=nt+30;
		printf("Ngay thu %d trong nam",nt);
	}if(b>10){
		nt=nt+31;
		printf("Ngay thu %d trong nam",nt);
	}if(b>11){
		nt=nt+30;
		printf("Ngay thu %d trong nam",nt);
	}if(b==1){
		printf("Ngay thu %d trong nam",a);
	}
}

	
}
