#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        arr[i] = arr[i] * 2;
        printf("%d ", arr[i]);
    }
    return 0;
}
