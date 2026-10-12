// wap to find a raised to powr b
#include<stdio.h>
int main()
{
    int a,b,result=1;
    printf("Enter base : ");
    scanf("%d",&a);
    
    printf("Enter exponent : ");
    scanf("%d",&b);

    for (int i = 1; i <= b; i++)
    {
        result*=a;
    }
    printf("Result = %d \n",result);
    return 0;
    
}