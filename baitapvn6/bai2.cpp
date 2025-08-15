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
    
    int s=0, x=0;
    for(int i=0; i<n;i++){
    	if(i%2==0){
    		if(player[i]%2!=0){
    		   
    		    s=s+player[i];
    		x++;
		    }
			
			  
		}
		
		}
		float tbc = s/x;
   
        printf("trung binh cong cac so le la %f:",tbc);
		
	}

