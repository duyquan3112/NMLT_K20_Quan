#include <stdio.h>

int choncongvien(int);
void nhapmang(int[], int);
void xuatmang(int[], int);
int kiemtra3(int[],int);
int tong(int[],int);


int choncongviec(int choice)
{
	if(choice==1)
	{
		return 1;
	}
	if(choice==2)
	{
		return 2;
	}
	if(choice==3)
	{
		return 3;
	}
	if(choice==4)
	{
		return 4;
	}
	

}

void nhapmang(int Arr[100], int n)
{	
	for(int i=0;i<n;i++)
	{
		printf("\n Arr[%d]= ",i);
		scanf("%d",&Arr[i]);
	}
	
}

void xuatmang(int Arr[100], int n)
{
	for(int i=0;i<n;i++)
	{
		printf("\n Arr[%d]= %d",i,Arr[i]);
	}
}

int kiemtra3(int Arr[100], int n)
{
	int dem=0;
	for(int i=0;i<n;i++)
	{
		if(Arr[i]%3==0)
			dem++;
	}
	return dem;
}

int tong(int Arr[100], int n)
{
	int tong=0;
	for(int i=0;i<n;i++)
	{
		if(Arr[i]%3==0)
			tong=tong+Arr[i];
	}
	return tong;
}

int main()
{	
	do
	{
	int choice;
	int b;
	int Arr[100], n;
	printf("\n---MENU---\n");
	printf("1. Nhap mang\n");
	printf("2. Xuat mang\n");
	printf("3. Kiem tra cac phan tu chia het cho 3\n");
	printf("4. Tong cac phan tu chia het cho 3\n");
	printf("-----------------\n");
	printf("Chon chuc nang:");
	scanf("%d", &choice);
	b=choncongviec(choice);
	switch(b)
	{
		case 1 :printf("Nhap do dai cua mang: ");
				scanf("%d",&n); 
				nhapmang(Arr,n); break;
		case 2 : xuatmang(Arr,n); break;
		case 3 : printf("Co %d phan tu chia het cho 3", kiemtra3(Arr,n)); break;
		case 4 : printf("Tong cac phan tu chia het cho 3 = %d",tong(Arr,n)); break;
	}
	}
	while(1);
	return 0;
}

