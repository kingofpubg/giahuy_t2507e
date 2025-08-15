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
    
    int  s=0,x=0;
    for(int i=0; i<n;i++){
    
    	if(player[i]%2!=0){
    		printf("cac so le %d\n",player[i]);
    		
    		s=s+player[i];
    		x++;
		}else{
			printf("Khong co so le");
			break;
		}
		
		
   }
   float tbc = s/x;
   printf("trung binh cong cac so le la %f:",tbc);

}
