#include <stdio.h>
int main() {
    int arr[8] = {2, 3, 2, 5, 2, 7, 3, 2};
    int x, count = 0;
    printf("Enter number to count: ");
    scanf("%d", &x);
    for (int i = 0; i < 8; i++)
        if (arr[i] == x)
            count++;
    printf("%d appears %d times", x, count);
    return 0;
}
