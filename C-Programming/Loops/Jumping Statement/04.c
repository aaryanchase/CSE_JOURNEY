// write a program to print first 10 even number.

#include<stdio.h>
int main()
{
    int i,n=20;
    for (i=1;i<=n;i++)
    {
        if((i%2)!=0)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}