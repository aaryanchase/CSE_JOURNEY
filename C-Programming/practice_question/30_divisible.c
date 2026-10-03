// Q30. Write a C program to accept a number and check whether it is divisible by either 3 or 5.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 3 == 0 || n % 5 == 0)
        printf("Divisible by 3 or 5");
    else
        printf("Not divisible");

    return 0;
}