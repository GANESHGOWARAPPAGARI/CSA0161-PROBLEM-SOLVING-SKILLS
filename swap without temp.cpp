#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the first number :");
	scanf("%d",&a);
	printf("Enter the second number:");
	scanf("%d",&b);
	printf("Elements before swap a=%d  b=%d\n",a,b);
	a=a+b;//10+20
	b=a-b;//30-20
	a=a-b;//20-10
	printf("Elements after  swap a=%d  b=%d",a,b);
	return 0;
}