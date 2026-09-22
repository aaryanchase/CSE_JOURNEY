#include<stdio.h>
int main()
{
    int num , sum=0,digit;
    printf("Enter five ddigit number;");
    scanf("%d",&num);
    digit=num%10;
    sum=sum+digit;
    num=num/10;

    digit=num%10;
    sum=sum+digit;
    num=num/10;

    digit=num%10;
    sum=sum+digit;
    num=num/10;

    digit=num%10;
    sum=sum+digit;
    num=num/10;

    digit=num%10;
    sum=sum+digit;
    
    printf("The sum of ddigi is %d ",sum);
    return 0;

}