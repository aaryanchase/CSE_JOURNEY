// Q39. Write a C program to accept age and check whether a person is a child or adult.
// Assume age below 18 = Child.

#include <stdio.h>

int main()
{
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    if (age < 18)
        printf("Child");
    else
        printf("Adult");

    return 0;
}