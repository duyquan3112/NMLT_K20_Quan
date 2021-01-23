#include <stdio.h>
#include <math.h>

int main(){
double a;
printf("Nhap so a: ");
scanf("%lf",&a);
if (a==0){
	printf("Zero");
}
if (a<0){
	if (abs(a)<1)
	printf("Small negative");
	else if (abs(a)>1000000)
	printf("Large negative");
	else 
	printf("Negative");
}
if (a>0){
	if (abs(a)<1)
	printf("Small positive");
	else if (abs(a)>1000000)
	printf("Large positive");
	else 
	printf("Positive");
}
return 0;
}
