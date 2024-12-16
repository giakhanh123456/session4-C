#include<stdio.h>

int main(){
	int a,b,c;
	printf("nhap so nguyen a: ");
	scanf("%d",&a);
	printf("nhap so nguyen b: ");
	scanf("%d",&b);
	printf("nhap so nguyen c: ");
	scanf("%d",&c);
	if((c > a && c < b) || (c > b && c < a)){
		printf("so %d nam trong khoang giua so %d và so %d",c,a,b);
	}else{
		printf("so %d khong nam trong khoang giua so %d va so %d",c,a,b);
	}
	return 0;
}
