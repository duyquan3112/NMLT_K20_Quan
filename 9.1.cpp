#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void RandomArray(int *, int); //tao mang
void Print(int *, int); //In mang
void Sochinhphuong(int *, int); //tim so chinh phuong
void Songuyento(int *, int); //tim so nguyen to
void Sohoanthien(int *, int); //tim so hoan thien

int main()
{
	int *Arr, N=10;
	Arr = (int*) malloc(N* sizeof(int));
	RandomArray(Arr,N);
	Print(Arr,N);
	printf("\n");
	Sochinhphuong(Arr,N);
	printf("\n");
	Songuyento(Arr,N);
	printf("\n");
	Sohoanthien(Arr,N);
	free(Arr);
	return 0;
}

void RandomArray(int *Arr, int N)
{
	srand(time(0));
	for (int i=0; i<N; i++)
		*(Arr+i)=rand() %100;
}

void Print(int *Arr, int N)
{
	for (int i=0; i<N; i++)
	{
		printf("%4d",*(Arr+i));
	}
}

void Sochinhphuong(int *Arr, int N)
{
	printf("Cac so chinh phuong la: ");
	for (int i=0; i<N; i++)
	{
		int A=sqrt(*(Arr+i));
		if (A*A==*(Arr+i))
		{
			printf("%4d",*(Arr+i));
		}
	}
	
}

void Songuyento(int *Arr, int N)
{ 	
	printf("Cac so nguyen to la: ");
	for (int i = 0; i < N; i++) 
	{
    	int t = 0; // t la bien dem
       for (int j = 1; j <= *(Arr+i); j++)
    	{
       	if ((*(Arr+i) % j) == 0)
          	t++;
		}
       if (t == 2)
       	{
          	printf("%4d", *(Arr+i));
        }
    }
}

void Sohoanthien(int *Arr,int N)
{
	printf("Cac so hoan thien la: ");
	int m=0;
	for (int i=0;i<N;i++)
	{
		for (int j=1; j<*(Arr+i);j++)
		{
			float z = *(Arr+i)%j;
			if (z==0)
			{
				m=m+j;
			}
		}
		if (m==*(Arr+i))
			printf("%4d",*(Arr+i));
	}
}


