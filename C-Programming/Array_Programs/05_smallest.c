#include <stdio.h>
int main() {
    int arr[6] = {12, 45, 7, 89, 23, 56};
    int min = arr[0];
    for (int i = 1; i < 6; i++)
        if (arr[i] < min)
            min = arr[i];
    printf("Smallest = %d", min);
    return 0;
}
