#include <stdio.h>

int main()
{
    int n, i = 1;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers");
    }
    else
    {
        while (i <= n)
        {
            factorial = factorial * i;
            i++;
        }

        printf("Factorial = %lld", factorial);
    }

    return 0;
}