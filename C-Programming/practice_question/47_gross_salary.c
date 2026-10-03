// Q47. Write a C program to accept basic salary and calculate gross salary.
// DA = 40% and HRA = 20%.

#include <stdio.h>

int main()
{
    float basic, da, hra, gross;

    printf("Enter basic salary: ");
    scanf("%f", &basic);

    da = basic * 0.40;
    hra = basic * 0.20;
    gross = basic + da + hra;

    printf("Gross Salary = %.2f", gross);

    return 0;
}