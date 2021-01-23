#include <stdio.h>
#include <conio.h>

void InputArray(int[], int);
void OutputArray(int[], int);
void Congmang(int[],int[],int[],int);
int main()
{
	int Arr1[100], Arr2[100],Arr3[100], N;
	do
	{	printf("Nhap N so phan tu cua mang: ");
		scanf("%d",&N);
	}
	while (N <= 0);
	printf("Nhap cac phan tu cua mang 1 : \n");
	InputArray(Arr1,N);
	printf("Nhap cac phan tu cua mang 2 : \n");
	InputArray(Arr2,N);
	printf("In cac phan tu cua mang sau khi cong: \n");
	Congmang(Arr1,Arr2,Arr3,N);
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

void Congmang(int Arr1[], int Arr2[],int Arr3[], int N)
{	
	for (int i = 0; i < N; i++)
	{
		Arr3[i]=Arr1[i]+Arr2[i];
	}
	OutputArray(Arr3,N);
}

