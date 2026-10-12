// Q65. Accept R, Y, or G and display the corresponding action.
// R = STOP, Y = WAIT, G = GO.

#include <stdio.h>

int main()
{
    char signal;

    printf("Enter traffic signal (R/Y/G): ");
    scanf(" %c", &signal);

    switch (signal)
    {
        case 'R':
        case 'r':
            printf("STOP");
            break;

        case 'Y':
        case 'y':
            printf("WAIT");
            break;

        case 'G':
        case 'g':
            printf("GO");
            break;

        default:
            printf("Invalid Signal");
    }

    return 0;
}