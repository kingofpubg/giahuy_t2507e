#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);
    
    int x;
    printf("Moi ban nhap so can kiem tra:");
    scanf("%d",&x);
    
    int player[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap player[%d]: ", i);
        scanf("%d", &player[i]);	
    }
    
    int y=0;
    for(int i=0;i<n;i++){
    	if(player[i]==x){
    		y=1;
    		break;
		}
	}
	 if(y!=0){
	 	printf("x co trong mang");
	 }else{
	 	printf("x khong co trong mang");
	 }
    
    
    
}
