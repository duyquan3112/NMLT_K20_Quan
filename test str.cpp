#include<stdio.h>
#include<conio.h>
#include<string.h>
void Tachso(char [], char []);
int main() 
{
	char mssv[100],ms[100];
	printf("Nhap ho va ten: ");
	gets(mssv);
	fflush(stdin);
	Tachso(mssv,ms);
	printf("%s",ms);
	return 0;
}

void Tachso(char mssv[],char ms[])
{
	int dem=0, m=0;
	int n=strlen(mssv);
	for(int i=n-1;i>=0;i--)
	{
		if(dem < 4)
		{
			ms[m]=mssv[i];
			ms[m+1]='\0';
			m++;
			dem++;
		}
	}
	strrev(ms);
}
