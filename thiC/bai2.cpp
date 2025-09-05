#include<stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    
    if(n<=0){
    	printf("SAI DIEU KIEN, Moi nhap lai");
    	return 0;
	}
	

    int player[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap player[%d]: ", i);
        scanf("%d", &player[i]); 
    }
    
    int snt=0;
    printf("Cac so nguyen to la: ");
    for(int i=0;i<n;i++){
    	int x= player[i];
    	int y=1;
    	if(x<2){
    		y=0;
		}
		for(int j=2;j*j<=x;j++){
			if(x%j==0){
				y=0;
				break;
			}
		}
		if(y==1){
			printf("%d  ",x);
			snt = 1;
		}
	}
	if(snt==0){
		printf("Khong co so nguyen to");
	}
	return 0;
}
