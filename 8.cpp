#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	double x, a;
	printf("Nhap so nguyen n: ");
	scanf("%d",&n);
	printf("Nhap so thuc x: ");
	scanf("%lf",&x);
	a = pow(n,(1/x));
	printf("Can bac x cua n la: %.7lf",a);
	return 0;
}
	
