#include <stdio.h>
#include <math.h>
int main()
{
	int a, b;
	printf("Nhap so nguyen duong co 2 chu so: ");
	scanf("%d",&a);
	b=(a-((a/10)*10))*10+(a/10);
	printf("So nghich dao la: %d",b);
	return 0;
}
