#include <stdio.h>

int main()
{
	int m=0,n;
	do
	{
		printf("Nhap so nguyen duong N: ");
		scanf("%d",&n);
		m=m+n;
	} 
	while (n>0);
	printf("Tong cac so vua nhap = %d",m);
	return 0;
}
