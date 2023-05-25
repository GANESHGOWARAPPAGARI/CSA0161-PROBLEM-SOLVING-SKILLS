#include<stdio.h>
int main()
{
	int i,n;
	printf ("Enter the Range :");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)
	{
		printf("%d\t",i);
		}
	return 0;
}