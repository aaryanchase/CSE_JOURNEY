// Q52. Write a C program to accept seconds and convert them into minutes.

#include <stdio.h>

int main()
{
    int seconds;

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    printf("Minutes = %d", seconds / 60);

    return 0;
}