#include<stdio.h>
#include <math.h>

int main() {
 	int n,convert=0,z,i=0;
 	
 	do
	 {
    printf("Nhap day so Binary bat ki = ");
    scanf("%d", &n);
	}
	while (n<=0);
    do { 
    		z=n % 10;
    		convert=convert + z*pow(2.0,i);
    		i++;
    		n = n / 10;
	}
	while (n>0);
    printf("Decimal number: %d", convert);
    return 0;
}
