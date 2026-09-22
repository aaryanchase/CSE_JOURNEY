#include<stdio.h>
int main()
{
    int cp,sp,profit,loss;

    printf("Enter the cost price of items : ");
    scanf("%d",&cp);

    printf("Enter the selling price of items : ");
    scanf("%d",&sp);
    profit=sp-cp;
    loss=cp-sp;
    if(sp>cp)
    {
        printf("He has made Profit \n");
        printf("Profit is = Rs.%d \n ", profit);
    }
    
    else
    {
        printf("He has Loss \n");
        printf("Loss is = Rs.%d \n ");
    }

    return 0;

}