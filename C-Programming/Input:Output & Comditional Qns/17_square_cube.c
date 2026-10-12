//Accept a number and calculate its square and cube.

#include <stdio.h>

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Square = %d\n", n * n);
    printf("Cube = %d\n", n * n * n);

    return 0;
}