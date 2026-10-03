#include<stdio.h>
int main()
{
    int yrs;
    printf("Enter any yrs : ");
    scanf("%d",&yrs);
    if((yrs%4)==0 || (yrs%400)==0)
    {
        printf("%d is leap year \n ",yrs);
    }
    else
    {
        printf("%d is not a leap year \n",yrs);
    }
    return 0;
}