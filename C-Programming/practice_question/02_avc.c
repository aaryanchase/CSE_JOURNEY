#include <stdio.h>
int main()
{
    int x,y;
    x=5;
    y=10;
    printf("The values are %d %d %d", x, x++,++x);
    printf("the values are %d %d %d",y, ++y,y++);
    return 0;
    // 5,5,5 
    //10 11 12
}