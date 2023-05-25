#include <stdio.h>
int main()
{
	int product=1,i,n;
	printf("Enter the number to find product of preceeding series :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d * ",i);
		product=product*i;
	}
	printf("\nThe product of preceeding series is = %d",product);
	return 0;
}