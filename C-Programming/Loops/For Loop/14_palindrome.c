// Check whether a number is a palindrome
#include <stdio.h>

int main() {
    int n, original, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    for(; n != 0; n /= 10) {
        reverse = reverse * 10 + n % 10;
    }

    if(original == reverse) {
        printf("Palindrome");
    } else {
        printf("Not a palindrome");
    }

    return 0;
}