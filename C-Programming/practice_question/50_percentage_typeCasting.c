// Q50. Write a C program to accept marks and total marks.
// Calculate percentage using explicit type casting.

#include <stdio.h>

int main()
{
    int marks, total;
    float percentage;

    printf("Enter marks obtained: ");
    scanf("%d", &marks);

    printf("Enter total marks: ");
    scanf("%d", &total);

    percentage = ((float)marks / total) * 100;

    printf("Percentage = %.2f", percentage);

    return 0;
}