// Q28. Write a C program to accept a number and check whether it is divisible by 5.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 5 == 0)
        printf("Divisible by 5");
    else
        printf("Not Divisible by 5");

    return 0;
}