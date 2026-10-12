// Q56. A student is eligible for admission if age is at least 17
// and marks are at least 50. Accept age and marks and check eligibility.

#include <stdio.h>

int main()
{
    int age, marks;

    printf("Enter age and marks: ");
    scanf("%d %d", &age, &marks);

    if (age >= 17)
    {
        if (marks >= 50)
            printf("Eligible for admission");
        else
            printf("Marks are insufficient");
    }
    else
    {
        printf("Age is insufficient");
    }

    return 0;
}