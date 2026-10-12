// Q37. Write a C program to accept marks and check whether the student has distinction.
// Assume distinction = 75 or above.

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 75)
        printf("Distinction");
    else
        printf("No Distinction");

    return 0;
}