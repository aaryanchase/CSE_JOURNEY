#include <stdio.h>
int main()
{
    int length, breadth;

    printf("Enter length of rectangle:");
    scanf("%d", &length);

    printf("Enter breadth of rectangle:");
    scanf("%d", &breadth);

    printf("The area of rectangle is %d \n ", length * breadth);
    
    return 0;
}