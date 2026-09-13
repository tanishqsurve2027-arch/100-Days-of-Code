/* Q25 (Conditional Statements)
Write a program to implement a basic calculator using switch-case for +, -, *, /, %. */

#include <stdio.h>

int main() {
    char op;
    int a, b;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter two integer operands: ");
    scanf("%d %d", &a, &b);

    switch (op) {
        case '+':
            printf("Result: %d + %d = %d\n", a, b, a + b);
            break;
        case '-':
            printf("Result: %d - %d = %d\n", a, b, a - b);
            break;
        case '*':
            printf("Result: %d * %d = %d\n", a, b, a * b);
            break;
        case '/':
            if (b != 0) {
                printf("Result: %d / %d = %d\n", a, b, a / b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        case '%':
            if (b != 0) {
                printf("Result: %d %% %d = %d\n", a, b, a % b);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid operator entered!\n");
    }

    return 0;
}