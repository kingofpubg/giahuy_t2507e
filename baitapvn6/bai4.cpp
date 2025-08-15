#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    
    int player[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap player[%d]: ", i);
        scanf("%d", &player[i]);	
    }
    
    int slcc=0;
    for(int i=0; i<n;i++){
    	
    	if(player[i]%2!=0){
    		slcc=player[i];
		}
		
    }
    printf("khong co so le");
    
    if(slcc != 0){
    	printf(" so le cuoi cung la:%d",slcc);
	}else{
		printf("khong co so le");
	}
}
