#include <stdio.h>
#include <math.h>

// Khai báo các hàm nguyên m?u
int T1(int);
int T2(int);
double T3(int);
double T4(int n);
double F1(int);
double Factorial(int); //hàm tính giai th?a
double F2(int);

int main()
{
	int N = 10;
	printf("Tong tu 1+2+3+... + 10 = %d\n", T1(10));
	printf("Ket qua cua 1-2+3-4+... 9-10 = %d\n", T2(10));
	printf("Ket qua cua 1 + 1/2 + 1/3 + ... + 1/n = %f\n", T3(10));
	printf("Ket qua cua 1 + 1/(1+2) + 1/(1+2+3)+... + 1/(1+2+...+n) = %f\n", T4(10));
	printf("Ket qua cua F1 = %.2f\n", F1(10));
	printf("Ket qua cua F2 = %.2lf\n", F2(10));
//.....
	return 0;
}


//Xây d?ng các hàm
int T1(int n)
{
	int S = 0;
	for (int i = 1; i <= n; i++)
		S += i;
	return S;
}

int T2(int n)
{
	int S = 0;
	int x=0, y=0;
	for (int i = 1; i <= n; i++)
		{
			if (i%2==0)
				x += i;
			else 
				y += i;
		}
		S = y - x;
	return S;
}

double T3(int n)
{
	float S = 0;
	for (int i = 1; i <= n; i++)
		 S = S + 1.0/i;
	return S;
}

double T4(int n)
{
	float S = 0;
	int x = 0;
	for (int i = 1; i <= n; i++)
		 for (int j = 1; j <= i; j++)
		 	 x += j; 
		S = 1.0/x; 
	return S;
}

double F1(int n)
{	double i;
	float S = 0;
	for (int i = 1; i <= n; i++)
		S = S + pow(i,i)/pow(i,1.0/i);
	return S;
}

double Factorial(int n)
{
	double x=1;
	for (int i = 1; i <= n ; i++)
		x*=i;
	return x;
}

int Sum(int n)
{
	int S = 0;
	for (int i = 1; i <= n; i++ )
		S += i;
	return S;
}

double F2(int n)
{
	double Z = 0;
	for (int i = 1; i <= n; i++)
		Z = Z + Factorial(i)/Sum(i);
	return Z;
}

