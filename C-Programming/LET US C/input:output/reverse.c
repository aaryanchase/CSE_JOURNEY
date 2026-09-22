#include <stdio.h>
int main()
{
    int num,digit,reverse=0;
    printf("Enter five digit number which you want to reverse");
    scanf("%d",&num);
    digit=num%10;
    reverse=reverse*10+digit;
    num=num/10;
    

     digit=num%10;
    reverse=reverse*10+digit;
    num=num/10;


     digit=num%10;
    reverse=reverse*10+digit;
    num=num/10;
    

     digit=num%10;
    reverse=reverse*10+digit;
    num=num/10;
    

     digit=num%10;
    reverse=reverse*10+digit;


    printf("The reverse of digit is % d", reverse);
    return 0;
}