#include<stdio.h>
int main(){
	int A;
	printf("Nhap A=\n");
	scanf("%d",&A);
	
	if(A>=9){
		printf("Xuat Sac!");
	}else{
		if(A>=8){
			printf("Gioi!");
		}else{
			if(A>=6){
				printf("Kh�!");
			}else{
				if(A>=5){
					printf("Trung B�nh!");
				}else{
					printf("Yeu!");
				}
			}
		}
	}
	
}
