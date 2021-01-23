#include <stdio.h>
#include <math.h>

int main(){
	int a, b;
	
	printf("Nhap nam: ");
	scanf("%d",&a);
	printf("Nhap thang: ");
	scanf("%d",&b);
	switch(b){
		case 1 : printf("Thang co 31 ngay"); break;
		case 3 : printf("Thang co 31 ngay"); break;
		case 5 : printf("Thang co 31 ngay"); break;
		case 7 : printf("Thang co 31 ngay"); break;
		case 8 : printf("Thang co 31 ngay"); break;
		case 10: printf("Thang co 31 ngay"); break;
		case 12: printf("Thang co 31 ngay"); break;
		case 4 : printf("Thang co 30 ngay"); break;
		case 6 : printf("Thang co 30 ngay"); break;
		case 9 : printf("Thang co 30 ngay"); break;
		case 11: printf("Thang co 30 ngay"); break;
	default :
	if (a%400 == 0){
		printf("Thang co 29 ngay");
	}
	else if (a%4 == 0){
		printf("Thang co 29 ngay");
	}
	else{
		printf("Thang co 28 ngay");
	}
	break;
}
	return 0;
}
