#include<stdio.h>
#include<conio.h>
#include<string.h>

void Tachten(char[], char []);
void Tachhodem(char[], char []);
void Tachso(char [], char []);

int main() 
{
	char s[100],t[100],hd[100],mssv[100],ms[100];
	printf("Nhap ho va ten: ");
	gets(s);
	fflush(stdin);
	printf("Nhap ma so sinh vien: ");
	gets(mssv);
	fflush(stdin);
	Tachten(s,t);
	Tachhodem(s,hd);
	Tachso(mssv,ms);
	strcat(hd,ms);
	printf("%s.%s@sinhvien.hoasen.edu.vn",t,hd);
	return 0;
}

void Tachten(char s[], char t[])
{
	int j=0;
	for(int i=strlen(s)-1;i>=0;i--)
	{
		if (s[i]==' ')
		break;
		t[j]=s[i];
		t[j+1]='\0';
		j++;
	}
	strrev(t);
	strlwr(t);
}

void Tachhodem(char s[], char hd[])
{
	int j=0, n, k=strlen(s);
	do
	{
	k--;
	n=k;
	}
	while(s[k]!=' ');
	for(int i=0;i<n;i++)
	{ 
		if(s[i]>=65 && s[i]<=90)
		{	
			hd[j]=s[i];
			hd[j+1]='\0';
			j++;
			
		}
	}
	strlwr(hd);
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

