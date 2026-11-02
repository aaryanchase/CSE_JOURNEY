#include <stdio.h>
int main() {
    int arr[8] = {5, -3, 0, 8, -1, 0, 7, -9};
    int pos = 0, neg = 0, zero = 0;
    for (int i = 0; i < 8; i++) {
        if (arr[i] > 0)
            pos++;
        else if (arr[i] < 0)
            neg++;
        else
            zero++;
    }
    printf("Positive = %d, Negative = %d, Zero = %d", pos, neg, zero);
    return 0;
}
