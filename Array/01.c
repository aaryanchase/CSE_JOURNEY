
#include <stdio.h>

int main()
{
    int stMarks[10];

    printf("Enter the marks of 10 students:\n");

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &stMarks[i]);
    }

    printf("Marks of students:\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", stMarks[i]);
    }

    return 0;
}
