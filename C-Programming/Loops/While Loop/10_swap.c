#include <stdio.h>

int main()
{
    int n, temp, first, last;
    int count = 0, divisor = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    last = temp % 10;

    while (temp > 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = n;

    while (count > 1)
    {
        divisor = divisor * 10;
        count--;
    }

    first = n / divisor;
    middle = (n % divisor) / 10;

    result = last * divisor + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}