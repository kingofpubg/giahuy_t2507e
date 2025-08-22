#include <stdio.h>

int daonguoc(int a){
	int dn=0;
	while(a!=0){
	    int dv=a%10; 
		dn= dn*10 + dv;
		a= a/10;
	}
	return dn;
}

int main(){
	int n;
	printf("nhap so :");
	scanf("%d",&n);
	printf("so dao nguoc cua %d la %d: ",n,daonguoc(n));
	
}
