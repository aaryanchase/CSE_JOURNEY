/*
If the marks obtained by a student in five different subjects
are input through the keyboard, find out the aggregate marks
and percentage marks obtained by the student. Assume that
the maximum marks that can be obtained by a student in each
subject is 100.

*/

#include<stdio.h>
int main()
{
    float sub1,sub2,sub3,sub4,sub5,aggregate_marks,total_marks,percentage;
    printf("Enter five subjects marks :");
    scanf("%f %f %f %f %f ",&sub1,&sub2,&sub3,&sub4,&sub5 );
    aggregate_marks=sub1+sub2+sub3+sub4+sub5;
    total_marks=500;
    percentage=aggregate_marks/500;
    printf("percentage is %f and aggregate marks is %f " , percentage,aggregate_marks);
    return 0;
}
