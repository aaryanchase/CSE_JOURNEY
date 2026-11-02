#include <stdio.h>
int main() {
    int arr[6] = {1, 2, 2, 3, 3, 3};
    int visited[6] = {0};
    for (int i = 0; i < 6; i++) {
        if (visited[i] == 1)
            continue;
        int count = 1;
        for (int j = i + 1; j < 6; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }
        printf("%d appears %d times\n", arr[i], count);
    }
    return 0;
}
