#include <stdio.h>

int main()
{
    int i = 1;

start:
    printf("%d ", i);

    i++;

    if (i <= 5)
    {
        goto start;
    }

    printf("Done");

    return 0;
}