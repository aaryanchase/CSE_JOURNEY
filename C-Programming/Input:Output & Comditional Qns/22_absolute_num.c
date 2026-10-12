#include <stdio.h>
int main()
{
    int num;
    printf("Enter value of number : ");
    scanf("%d",&num);
    if (num>0)
        printf("Absolute number is % d \n",num);
    else if (num<0)
       {
        num=(-1)*(num);
        printf("Absolute number is %d \n",num);
       } 
    else
        printf("Absolute number is Zero i.e. %d \n",num);
    return 0;
}