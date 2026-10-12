// Q45. Write a C program to accept three numbers and check whether all three numbers are different.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a != b && b != c && a != c)
        printf("All are different");
    else
        printf("Not all different");

    return 0;
}