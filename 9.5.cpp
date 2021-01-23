#include <stdio.h>
#include <string.h>

struct Sinhvien
{
	char name[50];
};

struct Sinhvien List[100];

void Nhapsinhvien(struct Sinhvien List[], int );
void Insinhvien(struct Sinhvien List[], int );
void Timsinhvien(struct Sinhvien List[], int n);
void Sapxepsinhvien(struct Sinhvien List[], int);

int main()
{	
	int n;
	printf("Nhap so luong sinh vien: ");
	scanf("%d",&n);
	Nhapsinhvien(List, n);
	printf("Danh sach sinh vien vua nhap: \n");
	Insinhvien(List,n);
	Timsinhvien(List,n);
	printf("Danh sach sinh vien da sap xep: \n");
	Sapxepsinhvien(List,n);
	Insinhvien(List,n);
	return 0;
}

void Nhapsinhvien(struct Sinhvien List[100], int n)
{
	for(int i=0;i<n;i++)
	{	
		fflush(stdin);
		printf("Nhap ten sinh vien: ");
		scanf("%[^\n]",&List[i].name);
	}
}

void Insinhvien(struct Sinhvien List[100], int n)
{
	for(int i=0; i<n; i++)
	{
		fflush(stdin);
		puts(List[i].name);
	}
}

void Timsinhvien(struct Sinhvien List[100], int n)
{
	fflush(stdin);
	char tensv[50];
	printf("Nhap ten sinh vien can tim: ");
	scanf("%[^\n]",&tensv);
	for(int i=0;i<n;i++)
	{
		if(strcmp(List[i].name, tensv)==0)
			printf("Vi tri sinh vien: %d\n",i);
	}
}

void Sapxepsinhvien(struct Sinhvien List[100], int n)
{
	char temp[100];
	fflush(stdin);
	for (int i = 1; i < n; i++) {
      for (int j = 1; j < n; j++) {
         if (strcmp(List[j - 1].name, List[j].name) > 0) {
            strcpy(temp, List[j - 1].name);
            strcpy(List[j - 1].name, List[j].name);
            strcpy(List[j].name, temp);
         }
      }
   }
}
