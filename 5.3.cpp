#include <stdio.h>
#include <math.h>

int main(){
	int a;
	printf("Nhap so nguyen A: ");
	scanf("%d",&a);
	int d = a % 3;
	int f = a % 5;
	if (d == 0 and f == 0){
		printf("A chia het cho 3 va 5");
		
	}
	else if (d == 0 and f != 0){
		printf("A chia het cho 3 va khong chia het cho 5");
		
	}
	else if (d != 0 and f == 0){
		printf("A chia het cho 5 va khong chia het cho 3");
	
	}
	else{
		printf("A khong chia het cho 3 va 5");
	}
	return 0;
}
