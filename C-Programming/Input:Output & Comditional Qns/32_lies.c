// Q32. Write a C program to accept a number and check whether it lies between 10 and 50.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n >= 10 && n <= 50)
        printf("Between 10 and 50");
    else
        printf("Outside range");

    return 0;
}