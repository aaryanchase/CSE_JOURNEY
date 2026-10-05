#include <stdio.h>

int main() {
    int n, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(; n != 0; n /= 10) {
        reverse = reverse * 10 + n % 10;
    }

    printf("Reverse = %d", reverse);

    return 0;
}