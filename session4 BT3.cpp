#include<stdio.h>

int main(){
	int n;
	printf("nhap so nguyen n: ");
	scanf("%d",&n);
	if(n % 3 == 0 && n % 5 == 0){
		printf("%d chia het cho ca 3 va 5", n);
	}else	if(n % 3 == 0){
		printf("%d chia het cho 3", n);
	}else if(n % 5 == 0){
		printf("%d chia het cho 5", n);
	}else{
        printf("%d khong chia het cho 3 hoac 5 hoac ca hai", n);
	}
	return 0;
}
