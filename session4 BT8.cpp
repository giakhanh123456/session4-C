#include<stdio.h>

int main(){
	float a,b,c;
	printf("nhap canh thu nhat: ");
	scanf("%f", &a);
	printf("nhap canh thu hai: ");
	scanf("%f", &b);
	printf("nhap canh thu ba: ");
	scanf("%f", &c);
	if( a + b > c && a + c > b && b + c > a){
		printf("%.2f %.2f %.2f la ba canh cua 1 tam giac",a,b,c);
	}else{
		printf("%.2f %.2f %.2f khong la ba canh cua 1 tam giac",a,b,c);
	}
	return 0;
}
