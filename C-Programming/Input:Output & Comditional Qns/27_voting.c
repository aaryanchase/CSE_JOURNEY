// Q27. Write a C program to accept age and check whether a person is eligible to vote.
// Age >= 18 means Eligible.

#include <stdio.h>

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age >= 18)
        printf("Eligible");
    else
        printf("Not Eligible");

    return 0;
}