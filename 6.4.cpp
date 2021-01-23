#include <stdio.h>

int main()
{
	int m=0,n,i;
	do
	{
		printf("Nhap so nguyen duong N: ");
		scanf("%d",&n);
	} 
	while (n<=0);
	for (i=1;i<=n;i++)
	{
		float z=n%i;
		if (z==0)
		m++;
	}
	if (m==2)
		printf("N la so nguyen to");
	else 
		printf("N khong la so nguyen to");
	return 0;
}
	
