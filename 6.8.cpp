#include <stdio.h>

int main()
{
	int n,m1,m2,m3;
	do
	{
		printf("Nhap so nguyen duong N: ");
		scanf("%d",&n);
	} 
	while (n<=0);
	printf("%d so fibonaci dau tien: 1 ",n);
	for (int i=1;i<=n-1;i++)
	{
		m1=m2;
		m2=m3;
		m3=m1+m2;
	printf("%d ",m3);
	}
	return 0;
}
	
