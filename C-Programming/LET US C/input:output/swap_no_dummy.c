#include <stdio.h>
int main()
{
    int c,d;
    printf("Enter two numbers:");
    scanf("%d %d",&c,&d);
    printf("c=%d , d=%d before swapping\n",c,d);
    
    c=c+d;
    d=c-d;
    c=c-d;
   
    printf("c=%d, d=%d after swapping",c,d);
    return 0;

}