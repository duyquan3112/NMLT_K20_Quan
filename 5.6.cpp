#include <stdio.h>
#include <math.h>

int main(){
	double a,b;
	printf("Nhap so Km di chuyen: ");
	scanf("%lf",&a);
	
	if (a > 0 and a <= 1){
		b = 1*16000;
		printf("So tien phai tra: %.2lf",b);
		
	}
	else if (a > 1 and a <= 30){
		b = 1*16000+((a-1)*1000/200)*2000;
		printf("So tien phai tra: %.2lf",b);
		
	}
	else if (a >= 31){
		b = 1*16000+29*10000+(a-30)*14000;
		printf("So tien phai tra: %.2lf",b);
	
	}
	return 0;
}
