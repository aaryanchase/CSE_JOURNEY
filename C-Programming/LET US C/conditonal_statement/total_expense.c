// finding total expense
#include<stdio.h>
int main()
{
    int qty,dis=0;
    float tot,rate;
    printf("Enter quantity and rate :");
    scanf("%d %f", &qty,&rate);
    if(qty>1000)
    dis=10;
    tot=((rate*qty)-(rate*qty*dis/100));
    printf("Total Expenses = Rs.%.2f \n",tot);
    return 0;

}