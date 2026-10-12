// Q61. Accept username and password as integers.
// First check username, then check password.
// Username = 1234 and Password = 5678.

#include <stdio.h>

int main()
{
    int username, password;

    printf("Enter username: ");
    scanf("%d", &username);

    printf("Enter password: ");
    scanf("%d", &password);

    if (username == 1234)
    {
        if (password == 5678)
            printf("Login Successful");
        else
            printf("Wrong Password");
    }
    else
    {
        printf("Wrong Username");
    }

    return 0;
}