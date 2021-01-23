#include<stdio.h>
#include<conio.h>
#include <ctype.h>
#include <string.h>

int demchucai(char *);
int demchuso(char *);
int demkhoangtrang(char *);
int demkitukhac(char *);


int main()
{ 
	char ch[100];
	int N;
	printf("Nhap chuoi bat ki: ");
	gets(ch);
	fflush(stdin);
	N= strlen(ch);
	printf("Do dai chuoi la:%d ",N);
	printf("\nSo ki tu chu:%4d ",demchucai(ch));
	printf("\nSo ki tu so:%4d ", demchuso(ch));
	printf("\nSo ki tu khoang trang:%4d ",demkhoangtrang(ch));
	printf("\nSo ki tu khac:%4d ",demkitukhac(ch));
	printf("\nChuoi sau khi dao nguoc: %s",strrev(ch));
	
	return 0;
}

int demchucai(char *ch)
{
	int dem1=0;
	for (int i=0;i<strlen(ch);i++)
	{
		if (ch[i]>=65 && ch[i]<=90 || ch[i]>=97 && ch[i]<=122)
			dem1++;
	}
	return dem1;
}

int demchuso(char *ch)
{
	int dem2=0;
    for (int i=0;i<strlen(ch);i++)
    {
    	if (ch[i]>=48 && ch[i]<=57)
    		dem2++;
    }
	return dem2;
}

int demkhoangtrang(char *ch)
{
	int dem3=0;
	for (int i=0;i<strlen(ch);i++)
    {
    	if (ch[i]==32)
    		dem3++;
    }
	return dem3;
}

int demkitukhac(char *ch)
{
	int N=0;
	N=strlen(ch)-demchucai(ch)-demchuso(ch)-demkhoangtrang(ch);
	return N;
}

