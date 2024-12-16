#include<stdio.h>

int main(){
	int ngay, thang, nam;
	int count = 0;
	int namnhuan = 0;
	printf("nhap ngay : ");
	scanf("%d", &ngay);
	printf("nhap thang : ");
	scanf("%d", &thang);
	printf("nhap nam : ");
	scanf("%d", &nam);
	if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)){
		namnhuan = 1;
	}
	if(thang < 1 || thang > 12){
		count = 1;
	}
	int ngaytrongthang;
	switch(thang){
			case 1:
		case 3:
	    case 5:	
	    case 7:
	   	case 8:
	   	case 10:
	   	case 12:
	   	    ngaytrongthang = 31;
	   	    break;
	   	case 4:
		case 6:
		case 9:
		case 11:
			 ngaytrongthang = 30;
			break;
		case 2:
	    if(namnhuan == 1){
	    	 ngaytrongthang = 29;
	    }else{
	    	 ngaytrongthang = 28;
		}
			break;
	}
	if(ngay < 1 || ngay > ngaytrongthang){
		count = 1;
	}
	if(count == 0){
		printf("ngay %d/%d/%d hop le\n",ngay,thang,nam);
	}else{
		printf("khong hop le\n");
	}
	return 0;
}

