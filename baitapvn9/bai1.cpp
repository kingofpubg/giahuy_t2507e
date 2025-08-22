#include<stdio.h>


int tinhtongcacchuso(int a){
	int tong=0;
	while(a>0){
		int x=a%10;
		tong= tong+ x;
		a=a/10;
	}
	return tong;
}

int main(){
	int n;
	printf("nhap so :");
	scanf("%d",&n);
	printf("%d co tong cac chu so la %d\n",n, tinhtongcacchuso(n));
	
}
