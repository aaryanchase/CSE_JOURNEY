// Find the largest digit in a number
#include <stdio.h>

int main() {
    int n, digit, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(; n != 0; n /= 10) {
        digit = n % 10;

        if(digit > largest) {
            largest = digit;
        }
    }

    printf("Largest digit = %d", largest);

    return 0;
}