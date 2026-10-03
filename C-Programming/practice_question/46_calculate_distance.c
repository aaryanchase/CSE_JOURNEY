// Q46. Write a C program to accept price and discount percentage.
// Calculate and display the final amount after discount.

#include <stdio.h>

int main()
{
    float price, discount, amount;

    printf("Enter price: ");
    scanf("%f", &price);

    printf("Enter discount percentage: ");
    scanf("%f", &discount);

    amount = price - (price * discount / 100);

    printf("Final Amount = %.2f", amount);

    return 0;
}