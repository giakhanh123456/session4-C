#include<stdio.h>

int main(){
	int n;
	printf("nhap so nguyen n: ");
	scanf("%d",&n);
	if(n > 0){
		printf("%d la so duong\n", n);
	}
	else{
		printf("%d la so am\n", n);
	}
	return 0;
}
