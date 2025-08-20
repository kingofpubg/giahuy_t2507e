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
    
    int playernew[n];
    int x=0;
    
    for(int i=0;i<n;i++){
    	int y=0;
    	for(int j=0;j<x;j++){
    		if (player[i]==playernew[j]){
    			y=1;
    			break;
			}
    		
		}
		if(y==0){
			playernew[x]= player[i];
			x++;
		}
	}
	for(int i=0;i<x;i++){
		printf("%d ",playernew[i]);
	}
    return 0;
    
}
