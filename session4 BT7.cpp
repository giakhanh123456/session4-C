#include<stdio.h>

int main(){
	int nam;
	printf("nhap nam: ");
	scanf("%d", &nam);
	int dk1 = nam % 4 == 0 && nam % 100 != 0;
	int dk2 = nam % 400 == 0;
	if(dk1 || dk2){
		printf("nam %d la nam nhuan\n", nam);
	}else{
		printf("nam %d khong phai la nam nhuan\n", nam);
	}
	return 0;
}
