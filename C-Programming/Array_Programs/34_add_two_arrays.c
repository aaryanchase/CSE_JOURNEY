#include <stdio.h>
int main() {
    int a[4] = {1, 2, 3, 4};
    int b[4] = {10, 20, 30, 40};
    for (int i = 0; i < 4; i++)
        printf("%d ", a[i] + b[i]);
    return 0;
}
