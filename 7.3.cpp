#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
// Khai bao cac ham nguyen mau
void Menu(int&);
void vuongdac(int, char);
void vuongrong(int, char);
void nhatdac(int, char);
void nhatrong(int, char);
void candac(int, char);
void canrong(int, char);

int main()
{
	int a, choice;
	char b;
	
	/*printf("Nhap chieu cao va ki tu ve:");
	scanf("%d%c", &a, &b);
*/	do
	{
		system("CLS"); //Xóa màn hình, th? vi?n windows.h
		Menu(choice);
		switch (choice)
		{
		case 1: printf("Nhap chieu cao va ki tu ve:");
				scanf("%d %c", &a, &b);
				break;
		case 2: printf("Hinh tam giac vuong dac \n"); 
				vuongdac(a,b);
				break;
		case 3: printf("Hinh tam giac vuong rong \n"); 
				vuongrong(a,b);
				break;
		case 4: printf("Hinh chu nhat dac \n"); 
				nhatdac(a,b);
				break;
		case 5: printf("Hinh chu nhat rong \n"); 
				nhatrong(a,b);
				break;
		case 6: printf("Hinh tam giac can dac \n"); 
				candac(a,b);
				break;
		case 7: printf("Hinh tam giac can rong \n"); 
				canrong(a,b);
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
	printf("1. Nhap chieu cao va ki tu ve\n");
	printf("2. Ve hinh tam giac vuong dac\n");
	printf("3. Ve hinh tam giac vuong rong\n");
	printf("4. Ve hinh chu nhat dac\n");
	printf("5. Ve hinh chu nhat rong\n");
	printf("6. Ve hinh tam giac can dac\n");
	printf("7. Ve hinh tam giac can rong\n");
	printf("-----------------\n");
	printf("Chon chuc nang:");
	scanf("%d", &choice);
}
void vuongdac(int a, char b)
{	
	for (int i=1;i<=a;i++)
	{
		for (int j=1;j<=i;j++)
		{
		printf("%c ",b);
		}
	printf("\n");
	}
}

void vuongrong(int a, char b)
{
	for (int i=1;i<=a;i++){
	
		for (int j=1;j<=i;j++)
		{	if (i==1 || i==a)
			{
				printf("%c ",b);
			}
			else
			if (j==1 || j==i)
				{
					printf("%c ",b);
				}	
				else 
				{
					printf("  ");
				}
		}
	printf("\n");
	}
}

void nhatdac(int a, char b)
{
	for (int i=1;i<=a;i++)
	{
	
		for (int j=1;j<=a;j++)
		{
		printf("%c ",b);
		}
	printf("\n\n");
	}
}

void nhatrong(int a, char b)
{
	for (int i=1;i<=a;i++)
	{
	
		for (int j=1;j<=a;j++)
		{	if (i==1 || i==a)
			{
				printf("%c ",b);
			}
			else
			if (j==1 || j==a)
				{
					printf("%c ",b);
				}	
				else 
				{
					printf("  ");
				}
		}
	printf("\n\n");
	}
}

void candac(int a, char b)
{
	for (int i=1;i<=a;i++)
	{
	
		for (int j=1;j<=a-i;j++)
		{
			printf(" ");
		}
		for (int k=1;k<=i;k++)
		{
			printf("%c ",b);
		}
	printf("\n");
	}
}

void canrong(int a, char b)
{
	for (int i=1;i<=a;i++)
	{
		for (int j=1;j<=a-i;j++)
		{
			printf(" ");
		}
	
		for (int j=1;j<=i;j++)
		{	if (i==1 || i==a)
			{
				printf("%c ",b);
			}
			else
			if (j==1 || j==i)
				{
					printf("%c ",b);
				}	
				else 
				{
					printf("  ");
				}
		}
	printf("\n");
	}
}

