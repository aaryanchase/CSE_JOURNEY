// Q13. Accept two numbers and an operator (+, -, *, /)
// and perform the corresponding arithmetic operation.

#include <stdio.h>

int main()
{
    float a, b;
    char op;

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%f", &b);

    switch (op)
    {
        case '+':
            printf("%.2f", a + b);
            break;

        case '-':
            printf("%.2f", a - b);
            break;

        case '*':
            printf("%.2f", a * b);
            break;

        case '/':
            if (b != 0)
                printf("%.2f", a / b);
            else
                printf("Cannot divide by zero");
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}