#include <stdio.h>
int main()
{
    int num, digit, multiplier, new_digit = 0;
    printf("Enter five digit numbers : ");
    scanf("%d", &num);

    printf("Digit before = %d ", num);

    multiplier = 1;
    digit = num % 10;
    new_digit = (digit + 1) * multiplier + new_digit;
    num = num / 10;

    multiplier = multiplier * 10;
    digit = num % 10;
    new_digit = (digit + 1) * multiplier + new_digit;
    num = num / 10;

    multiplier = multiplier * 10;
    digit = num % 10;
    new_digit = (digit + 1) * multiplier + new_digit;
    num = num / 10;

    multiplier = multiplier * 10;
    digit = num % 10;
    new_digit = (digit + 1) * multiplier + new_digit;
    num = num / 10;

    multiplier = multiplier * 10;
    digit = num % 10;
    new_digit = (digit + 1) * multiplier + new_digit;

    printf("Digit after = %d \n ", new_digit);

    return 0;
}