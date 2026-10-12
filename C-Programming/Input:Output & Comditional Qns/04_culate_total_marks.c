//wap to calculate the total marks obtained in given two subjects where the weitage of 1st subject is 30% and weitage of 2nd subject is 75%.
#include <stdio.h>
int main()
{
    int pMo,mMo,total;
    printf("Enter the marks obtained in physics and math: ");
    scanf("%d %d",&pMo,&mMo);
    total=(((30/100)*pMo)+((70/100)*mMo));
    
}