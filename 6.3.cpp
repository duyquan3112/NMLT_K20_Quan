#include <stdio.h>

int main()
{
	int m=1,n,i;
	do
	{
	printf("Nhap so nguyen duong N: ");
	scanf("%d",&n);
	} 
	while (n<=0);
	for (i=1;i<=n;i++)
	{
		m=m*i;
	}
	printf("N! = %d",m);
	return 0;
}
