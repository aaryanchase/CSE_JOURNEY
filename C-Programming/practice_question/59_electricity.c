// Q8. Accept units consumed and display:
// 0-100 -> Low Consumption
// 101-300 -> Medium Consumption
// Above 300 -> High Consumption

#include <stdio.h>

int main()
{
    int units;

    printf("Enter units consumed: ");
    scanf("%d", &units);

    if (units <= 300)
    {
        if (units <= 100)
            printf("Low Consumption");
        else
            printf("Medium Consumption");
    }
    else
    {
        printf("High Consumption");
    }

    return 0;
}