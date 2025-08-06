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
	
	
	
	
	if(a<=0 || a>31|| b<=0 || b>12|| c<=0){
		printf("Sai du lieu, nhap lai");
	}else{
		if(b==1 || b==3 || b==5 || b==7 || b==8 || b==10 ){
				if(a<31){
					a++;
					printf("ke tiep %d/%d/%d", a++,b,c);
				}else{
					a=1;
					b++;
					printf("ke tiep %d/%d/%d", a,b++,c);
				}
			}else{
				if(b==12){
					if(a<31){
						a++;
					    printf("ke tiep %d/%d/%d", a++,b,c);
					}else{
						a=1;
						b=1;
						c++;
						printf("ke tiep %d/%d/%d", a,b,c++);
					}
				}else{
					if(b==4 || b==6 || b==9 || b==11){
						if(a<30){
							a++;
							printf("ke tiep %d/%d/%d", a++,b,c);
						}else{
							a=1;
							b++;
							printf("ke tiep %d/%d/%d", a,b++,c);
						}
					}else{
						if( (c % 400 == 0) || (c % 4 == 0 && c % 100 != 0)){
							if(a<29){
								a++;
								printf("ke tiep %d/%d/%d", a++,b,c);
							}else{
								a=1;
								b++;
								printf("ke tiep %d/%d/%d", a,b++,c);
							}
						}else{
							if(a<28){
								a++;
								printf("ke tiep %d/%d/%d", a++,b,c);
							}else{
								a=1;
								b++;
								printf("ke tiep %d/%d/%d", a,b++,c);
							}
						}
					}
				}
}
}
}
