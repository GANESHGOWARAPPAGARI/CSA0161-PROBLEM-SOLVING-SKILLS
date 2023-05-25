#include <stdio.h>
int factorial(int n);
int main()
 {
    int n = 5;

    printf("Factorial of %d: %d", n, factorial(n));

    return 0;
}

int factorial(int n)
 {
    if (n == 0 || n == 1) 
	{
        return 1;
    } 
	else 
	{
        return n * factorial(n-1);
    }
}
