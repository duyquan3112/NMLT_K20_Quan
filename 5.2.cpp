#include <stdio.h>
#include <math.h>

int main(){
	int a;
	printf("Nhap so nguyen A: ");
	scanf("%d",&a);
	int d = a % 2;
	if (d == 0){
		printf("A la so chan");
	}
	else {
		printf("A la so le");
	}
	return 0;
}
