#include <stdio.h>
#include <math.h>

int main(){
	double a,b,c,d;
	printf("Nhap diem Toan, Ly, Hoa: ");
	scanf("%lf%lf%lf",&a,&b,&c);
	d = (a+b+c)/3;
	if (d < 5){
		printf("Xep loai kem");
		
	}
	else if (d < 7){
		printf("Xep loai trung binh");
		
	}
	else if (d < 8){
		printf("Xep loai kha");
	
	}
	else if (d < 9){
		printf("Xep loai gioi");
	}
	else {
		printf("Xep loai xuat sac");
	}
	return 0;
}
