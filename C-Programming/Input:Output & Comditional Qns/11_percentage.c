// Accept marks as an integer and calculate percentage using explicit type casting so the result can contain decimals.

#include <stdio.h>

int main()
{
    int marks, total;
    float percentage;

    printf("Enter obtained marks: ");
    scanf("%d", &marks);

    printf("Enter total marks: ");
    scanf("%d", &total);

    percentage = ((float)marks / total) * 100;

    printf("Percentage = %.2f%%\n", percentage);

    return 0;
}