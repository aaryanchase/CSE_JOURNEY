#include <stdio.h>
int main() {
    int arr[8] = {5, 12, 8, 20, 3, 15, 9, 30};
    int x, count = 0;
    printf("Enter x: ");
    scanf("%d", &x);
    for (int i = 0; i < 8; i++)
        if (arr[i] > x)
            count++;
    printf("%d elements are greater than %d", count, x);
    return 0;
}
