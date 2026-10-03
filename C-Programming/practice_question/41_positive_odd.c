// Q41. Write a C program to accept a number and check whether it is positive and odd.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0 && n % 2 != 0)
        printf("Positive and Odd");
    else
        printf("Condition not satisfied");

    return 0;
}