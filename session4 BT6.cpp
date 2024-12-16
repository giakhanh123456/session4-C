#include<stdio.h>

int main(){
	int socu, somoi, sodien, tiendien;
	printf("nhap chi so cu: ");
	scanf("%d", &socu);
	printf("nhap chi so moi: ");
	scanf("%d", &somoi);
	sodien = somoi - socu;
	if(sodien < 0){
		printf("so moi phai lon hon so cu\n");
		return 0;
	}
	if(sodien <= 50){
		tiendien = sodien * 10000;
	}else if(sodien <= 100){
		tiendien = 50 * 10000 + (sodien - 50) * 15000;
	}else if(sodien <= 150){
		tiendien = 50 * 10000 + 50 * 15000 + (sodien - 100) * 20000;
	}else if(sodien <= 200){
		tiendien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (sodien - 150) * 25000;
	}else if(sodien > 200){
		tiendien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (sodien - 200) * 30000;
	}
	printf("tien dien thang nay la: %d", tiendien);
	return 0;
}
		
		
	
