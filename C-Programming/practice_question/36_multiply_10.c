// Q36. Write a C program to accept a number and check whether it is a multiple of 10.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 10 == 0)
        printf("Multiple of 10");
    else
        printf("Not a multiple of 10");

    return 0;
}