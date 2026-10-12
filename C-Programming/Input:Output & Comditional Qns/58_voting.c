// Q58. Accept age. If eligible to vote, determine whether the person
// is a Young Adult (18-25) or Adult (above 25).

#include <stdio.h>

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        if (age <= 25)
            printf("Eligible - Young Adult");
        else
            printf("Eligible - Adult");
    }
    else
    {
        printf("Not Eligible");
    }

    return 0;
}