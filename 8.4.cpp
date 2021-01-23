#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
 
 void Menu(int&);
 void RandomArray(int[],int);
 void OutputArray(int[],int);
 void themvaodaumang(int[],int);
 void themvaocuoimang(int[],int);
 void themvaobatky(int[],int);
 void xoaphantu(int[],int);
 
 
 int main()
{
	int Arr[100], N;
	do
	{	printf("Nhap N so phan tu cua mang: ");
		scanf("%d",&N);
	}
	while (N <= 0);
	int choice;
	do
	{
		//system("CLS"); //Xóa màn hình, th? vi?n windows.h
		Menu(choice);
		switch (choice)
		{
		case 1: printf("In cac phan tu ngau nhien: ");
				RandomArray(Arr,N);
				OutputArray(Arr,N);
				break;
		case 2: printf("Them phan tu vao dau mang: \n"); 
				themvaodaumang(Arr,N);
				break;
		case 3: printf("Them phan tu vao cuoi mang: \n");
				themvaocuoimang(Arr,N);
				break;
		case 4: printf("Them phan tu vao vi tri bat ky:\n"); 
				themvaobatky(Arr,N);
				break;
		case 5: printf("Xoa phan tu co gia tri X: \n"); 
				xoaphantu(Arr, N);
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
	printf("1. In cac phan tu ngau nhien\n");
	printf("2. Them phan tu vao dau mang\n");
	printf("3. Them phan tu vao cuoi mang\n");
	printf("4. Them phan tu vao vi tri bat ky\n");
	printf("5. Xoa phan tu co gia tri X\n");
	printf("-----------------\n");
	printf("Chon chuc nang:");
	scanf("%d", &choice);
}


void RandomArray(int Arr[], int N)
{
	srand(time(0));
	for (int i=0; i<N; i++)
	{
		Arr[i]= -10 + rand()%(21);
	}
}


void OutputArray(int Arr[], int N)
{
	for (int i=0; i<N; i++)
		printf("%4d",Arr[i]);
}

void themvaocuoimang(int Arr[], int N)
{	
	int k; 
	printf("Nhap vao so can chen: ");
	scanf("%d",&k);
	for(int i=0;i<N;i++)
  {
   Arr[N]=k;
  }
 N=N+1;
 OutputArray(Arr,N);
}

void themvaodaumang(int Arr[], int N)
{	
	int k; 
	printf("Nhap vao so can chen: ");
	scanf("%d",&k);
	for(int i=N;i>=1;i--)
  	{
   		Arr[i]=Arr[i-1];
  	}
 	Arr[0]=k; 
 	N++;
 	OutputArray(Arr,N);
}

void themvaobatky(int Arr[],int N)
{
	
	int x,k;
 	printf("Nhap vao so can chen: ");
 	scanf("%d",&x);
 	printf("Nhap vao vi tri can chen: ");
 	scanf("%d",&k);
 	for(int i=N;i>=k;i--)
 	{
 		Arr[i]=Arr[i-1];
 	}
 	Arr[k]=x;
 	N++;
 	OutputArray(Arr,N);
}
void xoaphantu(int Arr[], int N)
{
	int k;
 printf("Nhap gia tri can xoa: ");
 scanf("%d",&k);
 for(int i=0;i<N;i++)
 {
 	if (Arr[i]==k)
  	Arr[i]=Arr[i+1]; 
  	
 }
 N=N-1; 
 OutputArray(Arr,N);
}

