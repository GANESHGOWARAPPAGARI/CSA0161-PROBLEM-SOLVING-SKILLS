#include <stdio.h>
int main()
{
	int m,n,r,res=0;
	printf("Enter a number :");
	scanf("%d",&n);
	m=n;
	while(n!=0)
	{
	    r=n%10;
		res=res+(r*r*r)	;
		n=n/10;
	}
	if(m==res)
	{
		printf("Amstrong number");
	}
	else
	{
		printf("Not an amstrong number");
	}
	return 0;
}