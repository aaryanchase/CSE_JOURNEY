// Q40. Write a C program to accept a number and check whether it is positive and even.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0 && n % 2 == 0)
        printf("Positive and Even");
    else
        printf("Condition not satisfied");

    return 0;
}