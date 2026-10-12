// Q43. Write a C program to accept three numbers and check whether all three numbers are equal.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == b && b == c)
        printf("All are equal");
    else
        printf("Not all equal");

    return 0;
}