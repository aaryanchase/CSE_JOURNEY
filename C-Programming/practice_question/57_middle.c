// Q57. Accept three different integers and find the middle value using nested if-else.

#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three different numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a < c)
            printf("%d is middle", a);
        else
        {
            if (b > c)
                printf("%d is middle", b);
            else
                printf("%d is middle", c);
        }
    }
    else
    {
        if (a > c)
            printf("%d is middle", a);
        else
        {
            if (b < c)
                printf("%d is middle", b);
            else
                printf("%d is middle", c);
        }
    }

    return 0;
}