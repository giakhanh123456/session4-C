#include<stdio.h>

int main(){
	int a,b,c,sonhonhat;
	printf("nhap so nguyen a: ");
	scanf("%d",&a);
	printf("nhap so nguyen b: ");
	scanf("%d",&b);
	printf("nhap so nguyen c: ");
	scanf("%d",&c);
	if(a > b){
		sonhonhat = a;
		a = b;
		b = sonhonhat;
	}
	if(a > c){
		sonhonhat = a;
		a = c;
		c = sonhonhat;
	}
    if(b > c){
    	sonhonhat = b;
	    b = c;
		c = sonhonhat;
	}
	printf("cac so tu nho den lon la %d %d %d",a,b,c);
	return 0;
}		
	
