//  The distance between two cities (in km.) is input through the
// keyboard. Write a program to convert and print this distance
// in meters, feet, inches and centimeters.
#include<stdio.h>
int main()
{
    float distance,meter,cm,ft,inches;
    printf("Enter distance between two cities in km : ");
    scanf("%f",&distance);
    meter=distance*1000;
    cm=meter*100;
    ft=cm/30.48;
    inches=12*ft;
    printf("meter= %.2f cm=%.2f ft=%.2f inches=%.2f",meter,cm,ft,inches);
    return 0;

}