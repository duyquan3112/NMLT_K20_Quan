#include <stdio.h>
#include <math.h>
int main(){
	int year, a, b;
	printf("Nhap nam: ");
	scanf("%d",&year);
	if (year>=2000){
		a = ((year-(year/100)*100)+100)%12;
	}
		else{
		a = (year-(year/100)*100)%12;
		}
	b = (year-(year/10)*10);
	switch(b){
		case 0 : printf(" Canh");break;
		case 1 : printf(" Tan");break;
		case 2 : printf(" Nham");break;
		case 3 : printf(" Quy");break;
		case 4 : printf(" Giap");break;
		case 5 : printf(" At");	break;
		case 6 : printf(" Binh");break;
		case 7 : printf(" Dinh");break;
		case 8 : printf(" Mau");break;
		case 9 : printf(" Ky");break;
}
	switch(a){
		case 0 : printf(" Ti");	break;
		case 1 : printf(" Suu");break;
		case 2 : printf(" Dan");break;
		case 3 : printf(" Meo");break;
		case 4 : printf(" Thin");break;
		case 5 : printf(" Ty");	break;
		case 6 : printf(" Ngo");break;
		case 7 : printf(" Mui");break;
		case 8 : printf(" Than");break;
		case 9 : printf(" Dau");break;
		case 10 : printf(" Tuat");break;
		case 11 : printf(" Hoi");break;
}

	return 0;
}
