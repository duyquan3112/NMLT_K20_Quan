#include <stdio.h>
#include <conio.h>

void InputArray(int[], int);
void OutputArray(int[], int);
void kiemtra(int[], int);
int main()
{
	int Arr[100], N;
	do
	{	printf("Nhap N so phan tu cua mang: ");
		scanf("%d",&N);
	}
	while (N < 2);
	printf("Nhap cac phan tu cua mang: \n");
	InputArray(Arr,N);
	printf("In cac phan tu cua mang va kiem tra: \n");
	OutputArray(Arr,N);
	printf("\n");
	kiemtra(Arr, N);
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

void kiemtra(int Arr[], int N)
{
	if (Arr[0]==Arr[N-1])
	{
		printf("Kiem tra: True");
	}
	else
	printf("Kiem tra: False");
}
