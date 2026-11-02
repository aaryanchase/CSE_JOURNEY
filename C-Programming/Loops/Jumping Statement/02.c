#include <stdio.h>

int main()
{
    int i = 0;

start:
    i++;

    if (i == 2)
    {
        goto skip;
    }

    if (i == 5)
    {
        return 0;
    }

    printf("%d ", i);

    if (i == 6)
    {
        return 0;
    }

skip:
    if (i < 6)
    {
        goto start;
    }

    printf("End");

    return 0;
}