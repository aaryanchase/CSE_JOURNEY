#include <stdio.h>
int main() {
    int currentYear, joinYear, years;
    printf("Enter current year: ");
    scanf("%d", &currentYear);
    printf("Enter year of joining: ");
    scanf("%d", &joinYear);
    years = currentYear - joinYear;
    if (years > 3)
        printf("Bonus of Rs. 2500/- is given to the employee");
    return 0;
}
