#include <stdio.h>
int main()
{
    int i, even = 0, odd = 0;
    for (int i=11; i<=50; i++)
    {
        if(i%2==0)
            even++;
        else
            odd++;
    }
    printf("Total even is %d , and total odd is %d", even,odd);

    return 0;
}