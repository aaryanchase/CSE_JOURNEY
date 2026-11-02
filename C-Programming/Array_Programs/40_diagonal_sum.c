#include <stdio.h>
int main() {
    int m[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = 0;
    for (int i = 0; i < 3; i++)
        sum += m[i][i];
    printf("Main diagonal sum = %d", sum);
    return 0;
}
