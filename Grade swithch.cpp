#include<stdio.h>
int main()
{
    int choice;
    printf("Enter your marks \n ");
    scanf("%d",&choice);
    if(choice<0 || choice>100)
    {
        printf("Dont be smart \nEnter your correct marks!!");
    }
    else
    {
    	switch(choice/10)
    	{
    		case 10:
    		case 9:
    			printf("A grade");
    			break;
    		case 8:
    			printf("B grade");
    			break;
    		case 7:
    			printf("C grade");
    			break;
    		case 6:
    			printf("D grade");
    			break;
    		case 5:
    			printf("E grade");
    			break;
    		default:
    			printf("F grade");
    		
		}
	}
	return 0;
}