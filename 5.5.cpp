#include <stdio.h>
#include <math.h>

int main(){
	double a,b;
	printf("Nhap so KWh dien tieu thu: ");
	scanf("%lf",&a);
	
	if (a >= 1 and a <= 50){
		b = a*1678;
		printf("So tien dien phai tra: %.2lf",b);
		
	}
	else if ( a <= 100){
		b = 50*1678+(a-50)*1734;
		printf("So tien dien phai tra: %.2lf",b);
		
	}
	else if (a <= 200){
		b = 50*1678+50*1734+(a-100)*2014;
		printf("So tien dien phai tra: %.2lf",b);
	
	}
	else if (a <= 300){
		b= 50*1678+50*1734+100*2014+(a-200)*2536;
		printf("So tien dien phai tra: %.2lf",b);
	}
	else if (a <= 400){
		b= 50*1678+50*1734+100*2014+100*2536+(a-300)*2834;
		printf("So tien dien phai tra: %.2lf",b);
	}
	else{
		b= 50*1678+50*1734+100*2014+100*2536+100*2834+(a-400)*2927;
		printf("So tien dien phai tra: %.2lf",b);
	}
	return 0;
}
