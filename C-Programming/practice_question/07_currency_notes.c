// Accept an amount in rupees and calculate how many ₹500, ₹200, ₹100, ₹50 and ₹20 notes are required using integer division and remainder.

#include <stdio.h>

int main()
{
    int amount;
    int n500, n200, n100, n50, n20;

    printf("Enter amount: ");
    scanf("%d", &amount);

    n500 = amount / 500;
    amount = amount % 500;

    n200 = amount / 200;
    amount = amount % 200;

    n100 = amount / 100;
    amount = amount % 100;

    n50 = amount / 50;
    amount = amount % 50;

    n20 = amount / 20;
    amount = amount % 20;

    printf("500 notes = %d\n", n500);
    printf("200 notes = %d\n", n200);
    printf("100 notes = %d\n", n100);
    printf("50 notes = %d\n", n50);
    printf("20 notes = %d\n", n20);

    printf("Remaining amount = %d\n", amount);

    return 0;
}