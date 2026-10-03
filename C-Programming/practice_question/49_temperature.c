// Q49. Write a C program to accept temperature in Fahrenheit and convert it into Celsius.

#include <stdio.h>

int main()
{
    float f, c;

    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);

    c = (f - 32) * 5 / 9;

    printf("Celsius = %.2f", c);

    return 0;
}