#include<stdio.h>

int mintrongmang(int player[],int size){

    int min = player[0];
    for(int i=0; i<size;i++){
    	
    	if(player[i]<min){
    		min=player[i];
		}
	}
	return min;
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
    printf(" so nho nhat trong mang la %d: ", mintrongmang(player,n));
}
    
