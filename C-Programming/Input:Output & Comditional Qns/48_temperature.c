// Q48. Write a C program to accept temperature in Celsius and convert it into Fahrenheit.

#include <stdio.h>

int main()
{
    float c, f;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);

    f = (c * 9 / 5) + 32;

    printf("Fahrenheit = %.2f", f);

    return 0;
}