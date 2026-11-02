#include <stdio.h>
int main() {
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int even = 0, odd = 0;
    for (int i = 0; i < 8; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even = %d, Odd = %d", even, odd);
    return 0;
}
