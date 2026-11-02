#include <stdio.h>
int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int sum = 0;
    for (int i = 0; i < 8; i++)
        if (arr[i] % 2 != 0)
            sum += arr[i];
    printf("Sum of odd = %d", sum);
    return 0;
}
