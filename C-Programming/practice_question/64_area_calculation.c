// Q64. Display a menu:
// 1. Rectangle
// 2. Square
// 3. Circle
// Accept choice and calculate the corresponding area.

#include <stdio.h>

int main()
{
    int choice;
    float a, b;

    printf("1. Rectangle\n");
    printf("2. Square\n");
    printf("3. Circle\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
        case 1:
            printf("Enter length and breadth: ");
            scanf("%f %f", &a, &b);

            printf("Area = %.2f", a * b);
            break;

        case 2:
            printf("Enter side: ");
            scanf("%f", &a);

            printf("Area = %.2f", a * a);
            break;

        case 3:
            printf("Enter radius: ");
            scanf("%f", &a);

            printf("Area = %.2f", 3.14 * a * a);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}