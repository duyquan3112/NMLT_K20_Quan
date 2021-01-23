#include<stdio.h>

int main() {
 	int n,tong=0;
 	do
	 {
    printf("Nhap so nguyen duong n = ");
    scanf("%d", &n);
	}
	while (n<=0);
    do {
    	tong = tong + n % 10;
    	n = n / 10;
	}
	while (n>0);
    printf("Tong cac chu so cua n la: %d", tong);
    return 0;
}
