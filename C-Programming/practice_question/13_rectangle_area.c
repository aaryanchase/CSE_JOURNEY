#include <stdio.h>
int main()
{
    int l,b,area,perimeter;
    printf("Enter length:");
    scanf("%d",&l);
    printf("Enter breadth:");
    scanf("%d",&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("Area of rectangle is %d and perimeter is %d \n ",area,perimeter);

}