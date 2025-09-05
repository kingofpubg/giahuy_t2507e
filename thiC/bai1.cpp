#include<stdio.h>
#include<string.h>

int main(){
	char s1[50],s2[50];
	printf("Nhap chuoi thu nhat:\n");
	scanf("%s",s1);
	printf("Nhap chuoi thu hai:\n");
	scanf("%s",s2);
	
	int dai1, dai2;
	for (dai1 = 0; s1[dai1] != '\0'; dai1++);
	for (dai2 = 0; s2[dai2] != '\0'; dai2++);
	
	char *ngan, *dai;
	int nh, dh;
	
	if(dai1<dai2){
		ngan = s1;
		dai = s2;
		nh = dai1;
		dh = dai2;
	}else{
		ngan = s2;
		dai = s1;
		nh = dai2;
		dh = dai1;
	}
	int x=0;
	for(int i=0;i<=dh-nh;i++){
		int j;
		for(j=0;j<nh;j++){
			if(dai[i+j] != ngan[j]){
				break;
			}
		}
		if(j== nh){
			x=1;
			break;
		}
	}
	if(x){
		printf("Yes");
	}else{
		printf("No");
	}
	return 0;
}
