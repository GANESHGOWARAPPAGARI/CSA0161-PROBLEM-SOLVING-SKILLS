//armstrong number
#include<stdio.h>
int main()
{
	int num,onum,rem,res=0;
	printf("enter a number:");
	scanf("%d",&num);
	onum=num;
	while(num!=0)
	{
		rem=onum%10;
		res=res+(rem*rem*rem);
		num=num/10;
	}
	if(res==onum)
	{
		printf("Armstrong number");
	}
	else
	{
		printf("not armstrong number");
	}
	return 0;
}