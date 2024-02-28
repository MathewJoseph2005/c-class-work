// 3.take two input values and perform all arithmetic operations on the given input.
#include <stdio.h>

int main() {
    float num1, num2;
    char operation;

    printf("Enter the first value: ");
    scanf("%f", &num1);

    printf("Enter the second value: ");
    scanf("%f", &num2);

    printf("Enter the operation (+, -, *, /): ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
            printf("Result: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Result: %.2f\n", num1 / num2);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Invalid operation. Please use +, -, *, or /\n");
    }

    return 0;
}
