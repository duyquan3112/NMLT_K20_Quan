#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,x0,x1,x2,x,denta;
	printf("Nhap he so a,b,c: ");
	scanf("%lf%lf%lf",&a,&b,&c);
	denta = (b*b)-(4*a*c);
	if (a==0)
	 {
	 	if (b==0){
			if (c==0)		 
	 	
	 		printf("Phuong trinh co vo so nghiem");
	 	
	 	else 
	 		printf("Phuong trinh vo nghiem"); 
	 	}
	 	else {
		 
	 	x=-c/b;
	 	    printf("Nghiem x = %.2lf",x);
		 }
	 }
	 else 
	 {
	 
	 if (denta < 0){
	 
	 	printf("Phuong trinh vo nghiem"); 	
	 }
	 else if (denta == 0){
	 
	 x0 = -b/(2*a);
	 	printf("Phuong trinh co nghiem kep: %.2lf",x0);
	}
	 else if (denta > 0){
	 
	 x1 = (-b-sqrt(denta))/2*a;
	 x2 = (-b+sqrt(denta))/2*a;
	 printf("Phuong trinh co 2 nghiem phan biet: %.2lf  %.2lf ",x1,x2);
	}
	 }
	 return 0;
}
