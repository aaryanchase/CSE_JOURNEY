#include <stdio.h>
int main() {
    float m1, m2, m3, m4, m5, percentage;
    printf("Enter marks of 5 subjects (out of 100): ");
    scanf("%f %f %f %f %f", &m1, &m2, &m3, &m4, &m5);
    percentage = (m1 + m2 + m3 + m4 + m5) / 5;
    printf("Percentage = %.2f%%\n", percentage);
    if (percentage >= 60)
        printf("First Division");
    else if (percentage >= 50)
        printf("Second Division");
    else if (percentage >= 40)
        printf("Third Division");
    else
        printf("Fail");
    return 0;
}
