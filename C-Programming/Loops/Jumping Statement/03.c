#include<stdio.h>
int main()
{
    int i,n=10;
    for(i=1;i<=n;i++)
    {
        if(i==5)
        {
            break;
        }

        printf("%d\n",i);
    }
return 0;
}