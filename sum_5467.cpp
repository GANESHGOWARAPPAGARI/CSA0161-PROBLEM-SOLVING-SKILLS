#include <stdio.h>

int main() {
    int num = 5467;
    int digit, sum = 0;
    while (num != 0) {
        digit = num % 10;   // Extract the last digit of the number
        sum += digit;       // Add the digit to the sum
        num = num / 10;     // Remove the last digit from the number
    }
    printf("The sum of the digits is: %d", sum);
    return 0;
}
