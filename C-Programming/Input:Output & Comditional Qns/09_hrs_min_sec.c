/*Accept a total number of seconds and convert it into:
- hours
- minutes
- seconds*/

#include <stdio.h>

int main()
{
    int total_seconds;
    int hours, minutes, seconds;

    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);

    hours = total_seconds / 3600;
    total_seconds = total_seconds % 3600;

    minutes = total_seconds / 60;
    seconds = total_seconds % 60;

    printf("Hours = %d\n", hours);
    printf("Minutes = %d\n", minutes);
    printf("Seconds = %d\n", seconds);

    return 0;
}