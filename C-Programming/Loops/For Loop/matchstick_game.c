#include<stdio.h>
int main()
{
    int user,computer;
    int matches=21;

    while (matches > 1)
    {
        printf("Matchstick remaining : %d\n", matches);
        printf("Pick 1,2,3, or 4 matchsticks : ");
        scanf("%d",&user);
        

        if (user<1 || user>4 || user>=matches)
        {
            printf("Invalid choice, Try again.\n");
            continue;
        }

        matches=matches-user;

        if(matches==1)
        {
            printf("You are forced to pick last matchstick.You loose!\n");
            break;
        }

        computer=5-user;
        printf("Computer picks %d matchsticks.\n",computer);

        matches= matches-computer;
        

    }



return 0;
}































// #include <stdio.h>

// int main()
// {
//     int matches = 21;
//     int user, computer;

//     while (matches > 1)
//     {
//         printf("Matchsticks remaining: %d\n", matches);
//         printf("Pick 1, 2, 3 or 4 matchsticks: ");
//         scanf("%d", &user);

//         if (user < 1 || user > 4 || user >= matches)
//         {
//             printf("Invalid choice. Try again.\n");
//             continue;
//         }

//         matches = matches - user;

//         if (matches == 1)
//         {
//             printf("You are forced to pick the last matchstick. You lose!\n");
//             break;
//         }

//         computer = 5 - user;
//         printf("Computer picks %d matchsticks.\n", computer);

//         matches = matches - computer;
//     }

//     return 0;
// }