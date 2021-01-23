#include<stdio.h>
#include<conio.h>
#include<string.h>

void Tachten(char[], char []);
void Tachhodem(char[], char []);
void Xoakhoangtrang(char []);

int main() 
{
	char s[100],t[100],hd[100];
	printf("Nhap ho va ten: ");
	gets(s);
	fflush(stdin);
	strlwr(s);
	Tachten(s,t);
	Tachhodem(s,hd);
	printf("%s.%s@hoasen.edu.vn",t,hd);
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
		j++;
	}
	strrev(t);
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
		hd[j]=s[i];
		hd[j+1]='\0';
		j++;
	}
	Xoakhoangtrang(hd);
}

void Xoakhoangtrang(char hd[])
{
	for(int i=0;i<strlen(hd);i++)
 		if(hd[i]==32)
 		{
 			for(int j=i;j<strlen(hd);j++)
 			{
 				hd[j]=hd[j+1];
 				i--;
 			}
 		}
}
