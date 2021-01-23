#include <stdio.h>
#include <math.h>

int main()
{
	int n, x;
	double t=0, k=0, z=0;
	printf("Nhap N:");
	scanf("%d",&n);
	printf("Nhap X:");
	scanf("%d",&x);
	t=(n*x)*12/100;
	k=(n*x)*5/100;
	z=(n*x)-t+k;
	printf("Giam gia = %.2lf\n",t);
	printf("Cuoc van chuyen = %.2lf\n",k);
	printf("So tien phai tra = %.2lf\n",z);
	return 0;

}
