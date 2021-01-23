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
	for (i=1;i<n;i++)
	{
		float z = n%i;
		if (z==0)
		{
		m=m+i;
		}
	}
	if (m<=n)
		printf("N la so hoan thien");
	else 
		printf("N khong phai so hoan thien");
	return 0;
}
