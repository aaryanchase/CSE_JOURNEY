// traffic light project

#include <stdio.h>
int main()
{
    char light;
    float speed;
    printf("Enter traffic light color : ");
    scanf("%c", &light);
    if (light == 'r')
    {
        printf("What's the speed of the vehicles : ");
        scanf("%f", &speed);
        if (speed > 0)
        {
            printf("🛑 Stop your vehicle immediately!!");
        }
        else
        {
            printf("Vehicle is already stopped.");
        }
    }
    else if (light == 'y')
    {
        printf("What's the speed of the vehicles : ");
        scanf("%f", &speed);
        if (speed >= 30)
        {
            printf("Slowdown your vehicle...");
        }
        else
        {
            printf("Vehicle is already slow ");
        }
    }
    else if (light == 'g')
    {
        printf("Go Go Go... ");
    }
    return 0;
}