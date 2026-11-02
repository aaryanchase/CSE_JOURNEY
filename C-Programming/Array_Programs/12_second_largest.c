#include <stdio.h>
int main() {
    int arr[6] = {12, 45, 7, 89, 23, 56};
    int first = -1, second = -1;
    for (int i = 0; i < 6; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second) {
            second = arr[i];
        }
    }
    printf("Second largest = %d", second);
    return 0;
}
