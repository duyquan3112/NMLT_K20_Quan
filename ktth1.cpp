#include <stdio.h>
#include <math.h>

int kiemtra(int, int, int);

int kiemtra(int a, int b, int c)
{	
	if(a+b>c && a+c>b && b+c>a)
	{
		return 0;
	}
	return 1;
}

int main()
{	
	int a,b,c;
	printf("Nhap do dai 3 canh tam giac: ");
	scanf("%d%d%d",&a,&b,&c);
	if(kiemtra(a,b,c)==0)
	{
		printf("\n %d %d %d la ba canh cua tam giac!",a,b,c);
		if(a==b&&b==c)
		{
			printf("\nTam giac deu ");
		}
		if(a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
		{
			printf("\nTam giac vuong ");	
		}
		if(a==b && b!=c || a==c && c!=b || b==c && c!=a)
		{
			printf("\nTam giac can ");
		}
		
	}
	else
	{
		printf("\n %d %d %d khong la ba canh cua tam giac!",a,b,c);
	}
	return 0;
}

