#include <stdio.h>
int main() {
    int arr[6] = {5, 8, 12, 20, 25, 30};
    int key, found = 0;
    printf("Enter number to search: ");
    scanf("%d", &key);
    for (int i = 0; i < 6; i++) {
        if (arr[i] == key) {
            printf("Found at index %d", i);
            found = 1;
            break;
        }
    }
    if (found == 0)
        printf("Not found");
    return 0;
}
