#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu : ");
    scanf("%d", &n);

    int player[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap player[%d]: ", i);
        scanf("%d", &player[i]);
    }
    int k;
    printf("So lan xoay la:");
    scanf("%d",&k);
    
    k=k%n;
    int temp[n];
    int j=0;
    for(int i=k; i<n;i++){
    	temp[j++]=player[i];
	}
	
	for(int i=0;i<k;i++){
		temp[j++]=player[i];
	}
	
	for(int i=0;i<n;i++){
		printf("%d",temp[i]);
	}
    return 0;
}
