#include<stdio.h>
int main()
{
    int num,check;
    printf("Enter any number to check even or odd : ");
    scanf("%d",&num);
    if(num==0)
    {
        printf("Enter non-zero number : ");
        scanf("%d");

    }
    check=num%2;
    if (check==0)
    {
        printf("%d is even number.",num);
    }
    else 
    {
        printf("%d is odd number.", num);
    }
    return 0;
}