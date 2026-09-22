#include<stdio.h>
int main()
{
    int Dearness_allowance,house_allowance,gross_salary, basic_salary;
    printf("Enter Basic Salary : ");
    scanf("%d",&basic_salary);
    Dearness_allowance= (40.0/100)*basic_salary; 
    house_allowance=(20.0/100)*basic_salary;
    gross_salary=basic_salary+Dearness_allowance+house_allowance;
    printf("Gross salary is %d \n",gross_salary);
    return 0;
}



//.0 doesn't mean you're entering a decimal salary.
// It tells C:"Do this division using decimal/floating-point arithmetic.

