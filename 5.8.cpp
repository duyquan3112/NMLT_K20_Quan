#include <stdio.h>
#include <math.h>

int main(){
	int a, b;
	
	printf("Nhap nam: ");
	scanf("%d",&a);
	b = a%60;
	switch(b){
		case 0 : printf("Nam Canh Than"); break;
		case 1 : printf("Nam Tan Dau"); break;
		case 2 : printf("Nam Nham Tuat"); break;
		case 3 : printf("Nam Quy Hoi"); break;
		case 4 : printf("Nam Giap Ti"); break;
		case 5 : printf("Nam At Suu"); break;
		case 6 : printf("Nam Binh Dan"); break;
		case 7 : printf("Nam Dinh Mao"); break;
		case 8 : printf("Nam Mau Thin"); break;
		case 9 : printf("Nam Ky Ty"); break;
		case 10: printf("Nam Canh Ngo"); break;
		case 11: printf("Nam Tan Mui"); break;
		case 12: printf("Nam Nham Than"); break;
		case 13: printf("Nam Quy Dau"); break;
		case 14: printf("Nam Giap Tuat"); break;
		case 15: printf("Nam At Hoi"); break;
		case 16: printf("Nam Binh Ti"); break;
		case 17: printf("Nam Dinh Suu"); break;
		case 18: printf("Nam Mau Dan"); break;
		case 19: printf("Nam Ky Ty"); break;
		case 20: printf("Nam Canh Thin"); break;
		case 21: printf("Nam Tan Ty"); break;
		case 22: printf("Nam Nham Ngo"); break;
		case 23: printf("Nam Quy Mui"); break;
		case 24: printf("Nam Giap Than"); break;
		case 25: printf("Nam At Dau"); break;
		case 26: printf("Nam Binh Tuat"); break;
		case 27: printf("Nam Dinh Hoi"); break;
		case 28: printf("Nam Mau Ty"); break;
		case 29: printf("Nam Ky Ty"); break;
		case 30: printf("Nam Canh Dan"); break;
		case 31: printf("Nam Tan Mao"); break;
		case 32: printf("Nam Nham Thin"); break;
		case 33: printf("Nam Quy Ty"); break;
		case 34: printf("Nam Giap Ngo"); break;
		case 35: printf("Nam At Mui"); break;
		case 36: printf("Nam Binh Than"); break;
		case 37: printf("Nam Dinh Dau"); break;
		case 38: printf("Nam Mau Tuat"); break;
		case 39: printf("Nam Ky Hoi"); break;
		case 40: printf("Nam Canh Ti"); break;
		case 41: printf("Nam Tan Suu"); break;
		case 42: printf("Nam Nham Dan"); break;
		case 43: printf("Nam Quy Mao"); break;
		case 44: printf("Nam Giap Thin"); break;
		case 45: printf("Nam At Ty"); break;
		case 46: printf("Nam Binh Ngo"); break;
		case 47: printf("Nam Dinh Mui"); break;
		case 48: printf("Nam Mau Than"); break;
		case 49: printf("Nam Ky Dau"); break;
		case 50: printf("Nam Canh Tuat"); break;
		case 51: printf("Nam Tan Hoi"); break;
		case 52: printf("Nam Nham Ti"); break;
		case 53: printf("Nam Quy Suu"); break;
		case 54: printf("Nam Giap Dan"); break;
		case 55: printf("Nam At Mao"); break;
		case 56: printf("Nam Binh Thin"); break;
		case 57: printf("Nam Dinh Ty"); break;
		case 58: printf("Nam Mau Ngo"); break;
		case 59: printf("Nam Ky Mui"); break;
		case 60: printf("Nam Canh Than"); break;
	}
	return 0;
}
