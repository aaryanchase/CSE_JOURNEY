// 

#include<stdio.h>
int main()
{
     int battery=10; 
     while(battery<=100)
     {
        printf("Charging.....Battery = %d\n",battery);
        battery+=10;
     }

     return 0;
}