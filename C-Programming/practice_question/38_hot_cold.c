// Q38. Write a C program to accept temperature and check whether it is hot or cold.
// Assume 30°C or above = Hot.

#include <stdio.h>

int main()
{
    float temperature;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);

    if (temperature >= 30)
        printf("Hot");
    else
        printf("Cold");

    return 0;
}