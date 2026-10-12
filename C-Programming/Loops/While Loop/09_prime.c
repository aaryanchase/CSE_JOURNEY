#include <stdio.h>

int main()
{
    int n, i = 2, prime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 2)
    {
        prime = 0;
    }

    while (i <= n / i && prime == 1)
    {
        if (n % i == 0)
        {
            prime = 0;
        }

        i++;
    }

    if (prime == 1)
        printf("Prime number");
    else
        printf("Not a prime number");

    return 0;
}