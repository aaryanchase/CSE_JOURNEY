#include <stdio.h>
int main()
{
    int c,d,temp;
    printf("Enter two numbers:");
    scanf("%d %d",&c,&d);
    printf("c=%d , d=%d before swapping\n",c,d);
    temp=c;
    c=d;
    d=temp;
   
    printf("c=%d, d=%d after swapping",c,d);
    return 0;

}