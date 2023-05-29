#include <stdio.h>

int main() {
    char operator;
    float operand1, operand2, result;

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter operand 1 & operand 2: ");
    scanf("%f %f", &operand1, &operand2);
    
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = operand1 - operand2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = operand1 * operand2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
                printf("Result: %.2f\n", result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
            break;
    }

    return 0;
}
