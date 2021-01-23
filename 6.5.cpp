#include <stdio.h>
int main() {
    int n;
   
    printf("Nhap so nguyen duong n: ");
    scanf("%d",&n);
    printf("%d so nguyen to dau tien:\n",n);
    int k=1; // k la dieu kien dung
    for (int i = 2;; i++) {
    	if (k>n)
    		break;
    	int t = 0; // t la bien dem
       for (int j = 1; j <= i; j++)
       	if ((i % j) == 0)
          	t++; 
       if (t == 2)
       	{
          	printf("%d ", i);
          	k++;
          }
    }
return 0;
}
