#include <stdio.h>
int main()
{
	int a,b,c,d;
	printf("Nhap a,b,c,d: ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int min=a;
	min = min>b ? b:min;
	min = min>c ? c:min;
	min = min>d ? d:min;
	printf("min = %d",min);
	return 0;
}
