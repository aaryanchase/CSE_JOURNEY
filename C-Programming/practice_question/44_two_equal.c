// Q44. Write a C program to accept three numbers and check whether exactly two numbers are equal.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
        printf("Exactly two are equal");
    else
        printf("Condition not satisfied");

    return 0;
}