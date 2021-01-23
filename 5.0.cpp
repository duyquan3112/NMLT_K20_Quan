#include <stdio.h>

int main()
{
	double a,b,x;
	printf("Nhap he so a,b: ");
	scanf("%lf%lf",&a,&b);
	if (a==0)
	 {
	 	if (b==0)
	 	
	 		printf("Phuong trinh co vo so nghiem");
	 	else 
	 		printf("Phuong trinh vo nghiem"); 
	 }
	 else 
	 {
	 	x=-b/a;
	 	printf("Nghiem x = %.2lf",x);
	 	
	 }
	 return 0;
}
