#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
// Khai bao cac ham nguyen mau
void Menu(int&);
int Tong(int, int);
int Hieu(int, int);
int Tich(int, int);
double Thuong(float, float);
int Max(int, int);
int USCLN(int, int);
int BSCNN(int, int);

int main()
{
	int a, b, choice;
	printf("Nhap a, b:");
	scanf("%d%d", &a, &b);
	do
	{
		system("CLS"); //Xóa màn hình, th? vi?n windows.h
		Menu(choice);
		switch (choice)
		{
		case 1: printf("Tong a + b = %d\n", Tong(a, b));
			break;
		case 2:  printf("Hieu a - b = %d\n", Hieu(a, b));
			break;
		case 3:  printf("Tich a * b = %d\n", Tich(a, b));
			break;
		case 4:  printf("Thuong a / b = %.2lf\n", Thuong(a, b));
			break;
		case 5:  printf("Max a va b = %d\n", Max(a, b));
			break;
		case 6:  printf("USCLN a va b = %d\n", USCLN(a, b));
			break;
		case 7:  printf("BSCNN a va b = %d\n", BSCNN(a, b));
			break;
		case 0: break;
		default:printf("Chon chuc nang khong hop le!\n");
		}
		getch();
	} while (choice != 0);
	return 0;
}
//Xay dung cac ham
void Menu(int &choice)
{
	printf("---MENU---\n");
	printf("1. Tong 2 so\n");
	printf("2. Hieu 2 so\n");
	printf("3. Tich 2 so\n");
	printf("4. Thuong 2 so\n");
	printf("5. Max \n");
	printf("6. USCLN cua 2 so\n");
	printf("7. BSCNN cua 2 so \n");
	printf("0. Thoat\n");
	printf("-----------------\n");
	printf("Chon chuc nang:");
	scanf("%d", &choice);
}
int Tong(int a, int b)
{
	return a + b;
}

int Hieu(int a, int b)
{
	return a - b;
}

int Tich(int a, int b)
{
	return a * b;
}

double Thuong(float a, float b)
{
	return a / b;
}

int Max(int a, int b)
{	int max;
	if (a>b)
		max = a;
	else
		max = b;
	return max;
}

int Min(int a, int b)
{	int min;
	if (a>b)
		min = b;
	else
		min = a;
	return min;
}

int USCLN(int a, int b)
{
	int m,n,S,i;
	for (i = 1;i<= Min(a, b);i++)
	{
	
		m=a%i;
		n=b%i;
		if (m==0 && n==0)
		{
		S = i;
		}
	}
	return S;
}

int BSCNN(int a, int b)
{
	int m,n,S,i;
	for (i = Max(a,b); ;i++)
	{
		m=i%a;
		n=i%b;
		if (m==0 && n==0)
		{
		S = i;
		break;
		}
	}
	return S;
}





