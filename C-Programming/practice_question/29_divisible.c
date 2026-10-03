// Q29. Write a C program to accept a number and check whether it is divisible by both 3 and 5.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 3 == 0 && n % 5 == 0)
        printf("Divisible by both");
    else
        printf("Not divisible by both");

    return 0;
}