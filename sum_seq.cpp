#include <stdio.h>

int main() {
    int sum = 0, i;
    for(i = 0; i <= 30; i += 2) 
	{
		printf("%d  ",i);
        sum += i;
    }
    printf("\nSum of the sequence = %d", sum);
    return 0;
}
