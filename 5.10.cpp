#include <stdio.h>
#include <math.h>
int main()
{ int a,b,c; //a la so nhap vao, b la so hang chuc, c la so hang don vi
	printf("Nhap vao so co 2 chu so: ");
	scanf("%d",&a);
	printf("Ban da nhap so: ");
	b = a/10;
	c = a-(a/10)*10;
	if (b==1)
	{
		switch(c)
		{	case 0 : printf("ten"); break;
			case 1 : printf("eleven"); break;
			case 2 : printf("twelve "); break;
			case 3 : printf("thirteen "); break;
			case 4 : printf("fourteen "); break;
			case 5 : printf("fifteen "); break;
			case 6 : printf("sixteen "); break;
			case 7 : printf("seventeen "); break;
			case 8 : printf("eighteen "); break;
			case 9 : printf("nineteen "); break;
			}
	}
	else 
	{
		switch(b)
		{	case 2 : printf("twenty"); break;
			case 3 : printf("thirty"); break;
			case 4 : printf("forty"); break;
			case 5 : printf("fifty"); break;
			case 6 : printf("sixty"); break;
			case 7 : printf("seventy"); break;
			case 8 : printf("eighty"); break;
			case 9 : printf("ninety"); break;
		}
		switch(c)
		{	case 0 : printf(" "); break;
			case 1 : printf("-one"); break;
			case 2 : printf("-two"); break;
			case 3 : printf("-three"); break;
			case 4 : printf("-four"); break;
			case 5 : printf("-five"); break;
			case 6 : printf("-six"); break;
			case 7 : printf("-seven"); break;
			case 8 : printf("-eight"); break;
			case 9 : printf("-nine"); break;
		}	
	}
	return 0;
}
