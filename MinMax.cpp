#include <stdio.h>
int main()
{
	int N[]={5,2,36,18,25,30};
	int n=sizeof(N)/sizeof(N[0]);
	int min=N[0];
	int max=N[0];
	for(int i=1;i<n;i++)
	{
		if(N[i]<min)
		{
			min=N[i];
	    }
		if(N[i]>max)
		{
			max=N[i];
	    }
	}
	printf("The smallest number is %d\n",min);
	printf("The largest  number is %d\n",max);
	return 0;
}                                          