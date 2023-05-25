#include <stdio.h>
#include <math.h>

int main() {
    int num, temp = 0;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;
    int sum = 0;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, 3);
        temp /= 10;
    }
    if (sum == num) {
        printf("%d is a number for which the sum of the cube of its digits is equal to the number itself.\n", num);
    } else {
        printf("%d is not a number for which the sum of the cube of its digits is equal to the number itself.\n", num);
    }
    return 0;
}
