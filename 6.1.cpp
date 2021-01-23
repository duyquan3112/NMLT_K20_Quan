#include <stdio.h>

int main()
{
	int n,i;
	do{
	printf("Nhap so nguyen duong N: ");
	scanf("%d",&n);}
	while (n<=0);
	printf("Cac uoc cua %d\n",n);
	for (i=1;i<=n;i++)
	{
		float z = n%i;
		if (z==0){
		
		printf(" %d ",i);
	}
	}
	return 0;
}
