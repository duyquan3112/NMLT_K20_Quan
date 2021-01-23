#include <stdio.h>
int main()
{
	int a,b;
	printf("Nhap so nguyen duong co 2 chu so: ");
	scanf("%d",&a);
	b=(a/10)+(a-((a/10)*10));
	printf("Tong 2 chu so vua nhap: %d",b);
 	return 0;
}

