#include <stdio.h>

int main()
{	int n;
	do 
	{ printf("Nhap so nguyen duong N: ");
	  scanf("%d",&n);
	}
	while (n<=0);
	for (int i=1;i<=n;i++){
	
		for (int j=1;j<=n;j++)
		{
		printf("* ");
		}
	printf("\n\n");
	}
	printf("\n\n");
	for (int i=1;i<=n;i++){
	
		for (int j=1;j<=i;j++)
		{
		printf("* ");
		}
	printf("\n\n");
	}
	printf("\n\n");
	for (int i=1;i<=n;i++){
	
		for (int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for (int k=1;k<=i;k++)
		{
			printf("* ");
		}
	printf("\n\n");
	}
	printf("\n\n");
	
	for (int i=1;i<=n;i++){
	
		for (int j=1;j<=n;j++)
		{	if (i==1 || i==n)
			{
				printf("* ");
			}
			else
			if (j==1 || j==n)
				{
					printf("* ");
				}	
				else 
				{
					printf("  ");
				}
		}
	printf("\n\n");
	}
	printf("\n\n");
	
	
	for (int i=1;i<=n;i++){
	
		for (int j=1;j<=i;j++)
		{	if (i==1 || i==n)
			{
				printf("* ");
			}
			else
			if (j==1 || j==i)
				{
					printf("* ");
				}	
				else 
				{
					printf("  ");
				}
		}
	printf("\n\n");
	}
	printf("\n\n");
	
	
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
	
		for (int j=1;j<=i;j++)
		{	if (i==1 || i==n)
			{
				printf("* ");
			}
			else
			if (j==1 || j==i)
				{
					printf("* ");
				}	
				else 
				{
					printf("  ");
				}
		}
	printf("\n\n");
	}
	printf("\n\n");
}



