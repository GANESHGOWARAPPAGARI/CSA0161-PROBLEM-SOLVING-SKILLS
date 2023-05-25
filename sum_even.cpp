#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,sum;
    sum=0;
    printf("Enter the Number : ");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        if(i%2==0)
            sum=sum+i;
    }
    printf("Sum of all Even Integers is %d",sum);
    
}