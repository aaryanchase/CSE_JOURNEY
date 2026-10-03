// Q55. Accept marks and display:
// 75+ -> Distinction
// 60-74 -> First Division
// 40-59 -> Pass
// Below 40 -> Fail

#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks: ");
    scanf("%d", &marks);

    if (marks >= 40)
    {
        if (marks >= 75)
            printf("Distinction");
        else
        {
            if (marks >= 60)
                printf("First Division");
            else
                printf("Pass");
        }
    }
    else
    {
        printf("Fail");
    }

    return 0;
}