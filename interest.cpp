#include <stdio.h>
#include <math.h>
int main()
{
	float p,n,a;
	float t,i;
	printf("Enter the principal amount :");
	scanf("%f",&p);
	printf("\nEnter the rate of Interest :");
	scanf("%f",&i);
	printf("\nEnter the number of years :");
	scanf("%f",&n);
	a=pow(1+i,n);
	t=p*a;
	printf("The total Amount is :%f",t);
	return 0;
}