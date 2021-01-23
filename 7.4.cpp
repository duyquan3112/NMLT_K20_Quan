#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
// Khai bao cac ham nguyen mau
void Menu(int&);
void taoso(int);
void insont(int);
int tinhNgiaithua(int);
void inFibo(int);
void kiemtraN(int);

int main()
{
	int n, choice;
	do
	{
		system("CLS"); //Xóa màn hình, th? vi?n windows.h
		Menu(choice);
		switch (choice)
		{
		case 1: { do
					{
					printf("Nhap so nguyen duong n (1 <= n <= 50): ");
					scanf("%d",&n);
					}
				while (n <=0 || n > 50);
				break;
				}
		case 2: printf("%d so ngau nhien: ",n);
			taoso(n);
			break;
		case 3: printf("Cac so nguyen to <= %d: ",n);
			insont(n);
			break;
		case 4: printf("%d! :%d",n,tinhNgiaithua(n));
			break;
		case 5: printf("%d so Fibonaci dau tien: ",n);
			inFibo(n);
			break;
		case 6: printf("Kiem tra %d: ",n);
			kiemtraN(n);
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
	printf("1. Nhap so nguyen duong N\n");
	printf("2. Tao ra N so ngau nhien nam trong khoang tu 1 den 50\n");
	printf("3. In ra tat ca cac so nguyen to <= N\n");
	printf("4. Tinh N!\n");
	printf("5. In ra N so Fibonaci dau tien\n");
	printf("6. Kiem tra N co phai la so hoan thien khong\n");
	printf("0. Thoat\n");
	printf("-----------------\n");
	printf("Chon chuc nang:");
	scanf("%d", &choice);
}


void taoso(int n)
{
	int r;
    for(int i = 0; i < n; ++i)
	{
        r = 1 + rand()%50;
        printf("%d ", r);
	}
}


void insont(int n)
{
    for (int i = 2; i <= n; i++) 
	{
    	int t = 0; // t la bien dem
       for (int j = 1; j <= i; j++)
    	{
       	if ((i % j) == 0)
          	t++;
		}
       if (t == 2)
       	{
          	printf("%d ", i);
        }
    }
}


int tinhNgiaithua(int n)
{
	double x=1;
	for (int i = 1; i <= n ; i++)
		x*=i;
	return x;
}


void inFibo(int n)
{
	int m1=0,m2=1,m3=0;
	for (int i=1;i<=n;i++)
	{
		m1=m2;
		m2=m3;
		m3=m1+m2;
	printf("%d ",m3);
	}
}


void kiemtraN(int n)
{	int m;
	for (int i=1;i<n;i++)
	{
		float z = n%i;
		if (z==0)
		{
		m=m+i;
		}
	}
	if (m<=n)
		printf("%d la so hoan thien",n);
	else 
		printf("%d khong phai so hoan thien",n);
}

