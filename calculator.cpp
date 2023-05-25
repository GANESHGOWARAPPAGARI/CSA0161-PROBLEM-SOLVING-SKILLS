#include <stdio.h>
int main() {
    char op;
    float num1, num2, result;
    
    printf("Enter operator (+, -, *, /): ");
    scanf("%c", &op);    // Read in the operator from user input
    
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);    // Read in the two numbers from user input
    
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("%.2f + %.2f = %.2f", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2f - %.2f = %.2f", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2f * %.2f = %.2f", num1, num2, result);
            break;
        case '/':
            if (num2 == 0) {
                printf("Error: Cannot divide by zero.");
            } else {
                result = num1 / num2;
                printf("%.2f / %.2f = %.2f", num1, num2, result);
            }
            break;
        default:
            printf("Error: Invalid operator.");
    }
    
    return 0;
}
