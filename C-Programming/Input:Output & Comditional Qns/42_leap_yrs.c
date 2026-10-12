// Q42. Write a C program to accept a year and check whether it is a leap year.

#include <stdio.h>

int main()
{
    int year;

    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;
}