#include<stdio.h>
int main()
{
    int i, n, multiply=0;
    printf("Enter number : ");
    scanf("%d",&n);
    for (i=1;i<=10;i++)
    {
        multiply=n*i;
         printf("%d * %d = %d\n",n,i,multiply);
    }
    return 0;
}