#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void RandomArray(int[],int);
void OutputArray(int[],int);

int main()
{
	int Arr[100];
	RandomArray(Arr,10);
	printf("\n In mang ngau nhien: ");
	OutputArray(Arr,10);
	getch();
	return 0;
}

void RandomArray(int Arr[], int N)
{
	srand(time(0));
	for (int i=0; i<N; i++)
	{
		Arr[i]= rand()%21;
	}
}

void OutputArray(int Arr[], int N)
{
	for (int i=0; i<N; i++)
		printf("%4d",Arr[i]);
}
