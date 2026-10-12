// Q51. Write a C program to accept seconds and convert them into hours.

#include <stdio.h>

int main()
{
    int seconds;

    printf("Enter seconds: ");
    scanf("%d", &seconds);

    printf("Hours = %d", seconds / 3600);

    return 0;
}