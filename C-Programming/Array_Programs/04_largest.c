#include <stdio.h>
int main() {
    int arr[6] = {12, 45, 7, 89, 23, 56};
    int max = arr[0];
    for (int i = 1; i < 6; i++)
        if (arr[i] > max)
            max = arr[i];
    printf("Largest = %d", max);
    return 0;
}
