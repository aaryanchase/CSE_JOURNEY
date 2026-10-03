// Q60. Accept three sides. First check whether the triangle is valid.
// If valid, check whether it is equilateral or not.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three sides: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a + b > c)
    {
        if (a + c > b)
        {
            if (b + c > a)
            {
                if (a == b && b == c)
                    printf("Equilateral Triangle");
                else
                    printf("Valid Triangle");
            }
            else
                printf("Invalid Triangle");
        }
        else
            printf("Invalid Triangle");
    }
    else
        printf("Invalid Triangle");

    return 0;
}