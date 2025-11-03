/* Program  : accept num and display all its non factors */

#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt = 0;

    //updator
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt != 0) && (iCnt != iNo))
        {
            printf("%d\t",iCnt);
        }
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    NonFact(iValue);
    
    return 0;
}