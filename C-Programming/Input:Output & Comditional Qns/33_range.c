// Q33. Write a C program to accept a number and check whether it is outside the range 10–50.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 10 || n > 50)
        printf("Outside range");
    else
        printf("Inside range");

    return 0;
}