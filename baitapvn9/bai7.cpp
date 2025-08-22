#include<stdio.h>

int maxtrongmang(int player[],int size){

    int high = player[0];
    for(int i=0; i<size;i++){
    	
    	if(player[i]>high){
    		high=player[i];
		}
	}
	return high;
}
	
int main(){
	int n;
    printf("Nhap so phan tu: ");
    scanf("%d", &n);

    int player[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &player[i]); 
    }
    printf(" so lon nhat trong mang la %d: ", maxtrongmang(player,n));
}
    
