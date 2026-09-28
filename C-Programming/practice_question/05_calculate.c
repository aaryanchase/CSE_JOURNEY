// Calculate a² + b²

#include <stdio.h>

int main()
{
    int a, b, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    result = (a * a) + (b * b);

    printf("a^2 + b^2 = %d\n", result);

    return 0;
}