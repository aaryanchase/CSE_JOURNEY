#include <stdio.h>

int main()
{
    int n, original, temp, digit;
    int count = 0, sum = 0, power, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;
    temp = n;

    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = n;

    while (temp > 0)
    {
        digit = temp % 10;
        power = 1;
        i = 1;

        while (i <= count)
        {
            power = power * digit;
            i++;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    if (original == sum)
        printf("Armstrong number");
    else
        printf("Not an Armstrong number");

    return 0;
}