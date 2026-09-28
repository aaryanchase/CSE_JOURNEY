/*. Accept the marks of five subjects — C, Python, HTML, Generative AI, and Java. Calculate the total marks and percentage, then assign a grade according to the following criteria:
- Percentage > 90 → Grade O
- Percentage > 80 → Grade A
- Percentage > 70 → Grade B
- Percentage > 60 → Grade C
- Percentage ≥ 40 → Grade D
- Percentage < 40 → Fail
Assume each subject is out of 100 marks and the total marks are 500.*/



#include <stdio.h>

int main()
{
    float c, python, html, gen_ai, java;
    float total, percentage;

    printf("Enter marks of five subjects: ");
    scanf("%f %f %f %f %f", &c, &python, &html, &gen_ai, &java);

    total = c + python + html + gen_ai + java;

    percentage = (total / 500) * 100;

    printf("Total Marks = %.2f\n", total);
    printf("Percentage = %.2f%%\n", percentage);


    if (percentage > 90)
        printf("Grade O");
    else if (percentage > 80)
        printf("Grade A");
    else if (percentage > 70)
        printf("Grade B");
    else if (percentage > 60)
        printf("Grade C");
    else if (percentage > 50)
        printf("Grade D");
    else if (percentage >= 40)
        printf("Grade E");
    else
        printf("Fail");

    return 0;
}