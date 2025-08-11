#include<stdio.h>
int main(){
	int n;
	printf("nhap so nguyen\n");
	scanf("%d",&n);
	int dn=0; // dn la so dao nguoc
	
	while(n!=0){
	    int dv=n%10; // dv la don vi
		dn= dn*10 + dv;
		n= n/10;
	}
	printf("so dao nguoc la %d",dn);
}
