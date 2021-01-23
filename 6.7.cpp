#include <stdio.h>

int main()
{
	int i,j,x,y,m1,m2,n1,n2,max,min;
	do
	{
		printf("Nhap 2 so nguyen duong x, y: ");
		scanf("%d%d",&x,&y);
	} 
	while (x<=0 || y<=0);
	if (x>=y)
	{
		max=x;
		min=y;
	}
	else
	{
		max=y;
		min=x;
	}
	printf("Uoc chung lon nhat la: ");
	for (i=min;i>=1;i--)
	{
		m1=x%i;
		n1=y%i;
	if (m1==0 and n1==0)
		{
		printf("%d \n",i);
		break;
		}
	}
	
	printf("Boi chung nho nhat la: ");
	for (j=max; ;j++)
	{
		m2=j%x;
		n2=j%y;
	if (m2==0 and n2==0)
		{
		printf("%d ",j);
		break;
		}
	}
	return 0;
}
	
