#include <stdio.h>
int main() {
    int arr[6] = {12, 45, 7, 89, 23, 56};
    int index = 0;
    for (int i = 1; i < 6; i++)
        if (arr[i] < arr[index])
            index = i;
    printf("Smallest is at index %d", index);
    return 0;
}
