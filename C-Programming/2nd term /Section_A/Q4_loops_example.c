#include <stdio.h>
int main() {
    int i = 10;

    printf("while loop (entry controlled): ");
    while (i <= 5) {
        printf("%d ", i);
        i++;
    }

    printf("\ndo-while loop (exit controlled): ");
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);

    return 0;
}
