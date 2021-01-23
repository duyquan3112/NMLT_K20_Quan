#include <stdio.h>
#include <conio.h>

void InputArray(int[], int);
void OutputArray(int[], int);
void Gop2mang(int[],int,int[],int,int[],int);
void mangtangdan(int[],int);
int main()
{
	int Arr1[100], Arr2[100],Arr3[100], N, M;
	do
	{	printf("Nhap N so phan tu cua mang 1: ");
		scanf("%d",&N);
		printf("Nhap N so phan tu cua mang 2: ");
		scanf("%d",&M);
	}
	while (N <= 0 || M <= 0);
	int H=M+N;
	printf("Nhap cac phan tu cua mang 1 : \n");
	InputArray(Arr1,N);
	printf("Nhap cac phan tu cua mang 2 : \n");
	InputArray(Arr2,M);
	printf("In cac phan tu cua mang sau khi gop va sap xep: \n");
	Gop2mang(Arr1,N,Arr2,M,Arr3,H);
	mangtangdan(Arr3,H);
	OutputArray(Arr3,H);
	return 0;
}

void InputArray(int Arr[], int N)
{
	for(int i=0; i < N; i++)
	{
		printf("A[%d]:",i);
		scanf("%d",&Arr[i]);
	}
}

void OutputArray(int Arr[], int N)
{
	for (int i=0; i<N; i++)
	printf("%4d",Arr[i]);
}

void Gop2mang(int Arr1[],int N,int Arr2[],int M,int Arr3[],int H)
{
	for (int i=0; i<H;i++)
	{
		if (i<N)
		{
			Arr3[i]=Arr1[i];
		}
		else
		{
			Arr3[i]=Arr2[i-1-M];
		}
	}
}


void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}


void mangtangdan(int Arr[], int H)
{
	for (int i = 0; i < H - 1; i++)
		for (int j = H - 1; j > i; j--)
		   if(Arr[j] < Arr[j-1])
		       Swap(Arr[j], Arr[j-1]);
}
