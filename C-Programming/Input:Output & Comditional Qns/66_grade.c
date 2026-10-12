// Q20. Accept a grade character and display its meaning.
// A = Excellent
// B = Very Good
// C = Good
// D = Pass
// F = Fail

#include <stdio.h>

int main()
{
    char grade;

    printf("Enter grade: ");
    scanf(" %c", &grade);

    switch (grade)
    {
        case 'A':
        case 'a':
            printf("Excellent");
            break;

        case 'B':
        case 'b':
            printf("Very Good");
            break;

        case 'C':
        case 'c':
            printf("Good");
            break;

        case 'D':
        case 'd':
            printf("Pass");
            break;

        case 'F':
        case 'f':
            printf("Fail");
            break;

        default:
            printf("Invalid Grade");
    }

    return 0;
}