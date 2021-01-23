#include <stdio.h>
int main()
{
	int a,b,c;
	printf("Nhap a,b,c: ");
	scanf("%d%d%d",&a,&b,&c);
	int max;
	max = a>b ? a:b;
	max = max>c ? max:c;
	printf("Max = %d",max);
	return 0;
}
