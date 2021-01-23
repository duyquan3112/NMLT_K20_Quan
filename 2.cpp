#include <stdio.h>
#include <math.h>

int main()
{
	int n;
	double x;
	double t=0, k=0, z=0;
	printf("Nhap N:");
	scanf("%d",&n);
	printf("Nhap X:");
	scanf("%lf",&x);
	t=((1/2)*x*n)+(2*32*(x*x*x));
	k=pow((x*x+x+1),n)+pow((x*x-x+1),n);
	z=(2*n*x+sqrt(x))/(1+2*x);
	printf("T = %.2lf\n",t);
	printf("K = %.2lf\n",k);
	printf("Z = %.2lf\n",z);
	return 0;
}
