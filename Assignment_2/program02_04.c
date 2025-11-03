/* Program  : accept two nums from user and display first num in second nums of times */

#include<stdio.h>

void Display(int iNo , int iFrequency)
{
    int iCnt = 0;

    //updator
    if(iFrequency < 0)
    {
        iFrequency = - (iFrequency);
    }

    for(iCnt = 1 ; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue1);

    printf("Enter Frequency : ");
    scanf("%d", &iValue2);

    Display(iValue1,iValue2);

    return 0;
}

