#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>
//khai bao cac ham
void Menu(int&);
void InputArray(int[], int);
void sole(int[], int);
void sochan(int[], int);
double giatritb(int[], int);
int max(int[], int);
int min(int[], int);
void timX(int[], int);
void Swap(int &a, int &b);
void Inmang(int[], int);
void mangtangdan(int[], int);
void manggiamdan(int[], int);

//ham main
int main()
{
	int Arr[100], N;
	do
	{	printf("Nhap N so phan tu cua mang: ");
		scanf("%d",&N);
	}
	while (N <= 0);
	printf("Nhap cac phan tu cua mang: \n");
	InputArray(Arr,N);
	int choice;
	do
	{
		//system("CLS"); //Xóa màn hình, th? vi?n windows.h
		Menu(choice);
		switch (choice)
		{
		case 1: printf("In cac phan tu co gia tri le: ");
				sole(Arr, N);
				break;
		case 2: printf("In cac phan tu co gia tri chan: \n"); 
				sochan(Arr,N);
				break;
		case 3: printf("Tinh gia tri trung binh cua cac phan tu: %.3lf\n",giatritb(Arr,N)); 
				break;
		case 4: printf("Tim gia tri max va gia tri min cua mang: %3d %3d\n",max(Arr,N),min(Arr,N)); 
				break;
		case 5: printf("Tim phan tu X va vi tri cua no: \n"); 
				timX(Arr,N);
				break;
		case 6: printf("Sap xep mang tang dan: \n"); 
				mangtangdan(Arr,N);
				Inmang(Arr,N);
				break;
		case 7: printf("Sap xep mang giam dan: \n"); 
				manggiamdan(Arr,N);
				Inmang(Arr,N);
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
	printf("1. In cac phan tu co gia tri le\n");
	printf("2. In cac phan tu co gia tri chan\n");
	printf("3. Tinh gia tri trung binh cua cac phan tu\n");
	printf("4. Tim gia tri max va gia tri min cua mang\n");
	printf("5. Tim phan tu X va vi tri cua no\n");
	printf("6. Sap xep mang tang dan\n");
	printf("7. Sap xep mang giam dan\n");
	printf("-----------------\n");
	printf("Chon chuc nang:");
	scanf("%d", &choice);
}


void InputArray(int Arr[], int N)
{
	for(int i=0; i < N; i++)
	{
		printf("A[%d]:",i);
		scanf("%d",&Arr[i]);
	}
}


void sole(int Arr[], int N)
{
	for (int i = 0; i < N; i++)
	{
		if (Arr[i]%2)
		printf("%4d",Arr[i]);
	}
}


void sochan(int Arr[], int N)
{
	for (int i = 0; i < N; i++)
	{
		if (Arr[i]%2==0)
		printf("%4d",Arr[i]);
	}
}


double giatritb(int Arr[], int N)
{
	double S=0;
	double T;
	for(int i=0; i < N; i++)
	{
		S=S+Arr[i];
	}
	T = S/N;
	return T;
}

		
int max(int Arr[], int N)
{	
	int max=Arr[0];
	for(int i = 0; i < N; i++)
	{	
		if (max<Arr[i])
			{
				max=Arr[i];
			}
	}
	return max;
}


int min(int Arr[], int N)
{
	int min=Arr[0];
	for (int i = 0; i < N; i++)
	{
		if (min>Arr[i])
			{
				min=Arr[i];
			}
	}
	return min;
}


void timX(int Arr[], int N)
{	
	int X;
	printf("Nhap so can tim: ");
	scanf("%d",&X);
	for (int i=0; i < N; i++)
	{
		if(Arr[i]==X)
		{
			printf("Vi tri: A[%d]",i);
		}
	}	
}


void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}


void mangtangdan(int Arr[], int N)
{
	for (int i = 0; i < N - 1; i++)
		for (int j = N - 1; j > i; j--)
		   if(Arr[j] < Arr[j-1])
		       Swap(Arr[j], Arr[j-1]);
}
 
 
 void Inmang(int Arr[], int N)
 {
 	for (int i=0; i < N; i++)
 	{
 		printf("%4d", Arr[i]);	
	}
 }
 
 
 void manggiamdan(int Arr[], int N)
{
	for (int i = 0; i < N - 1; i++)
		for (int j = N - 1; j > i; j--)
		   if(Arr[j] > Arr[j-1])
		       Swap(Arr[j], Arr[j-1]);
}
