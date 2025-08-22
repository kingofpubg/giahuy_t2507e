#include<stdio.h>
#include<math.h>
int tinhtongcacchuso(int a){
	int tong=0;
	while(a>0){
		int x=a%10;
		tong= tong+ x;
		a=a/10;
	}
	return tong;
}

int ucln(int a, int b){
	int gt=1;
	for(int i=1;i<=a && i<=b;i++){
		if(a%i==0 && b%i==0){
			
			gt=i;
		}
	}
	return gt;
}
int bcnn(int a, int b){
	return abs((a*b)/ucln(a,b));
}

int mu(int a, int b){
	int s=1;
	for(int i =1;i<=b;i++){
		s=s*a; // s*=a
	}
	return s;
}
