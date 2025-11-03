/* Program  : accept num and print even factors of that number */

#include<stdio.h>

void EvenFactor(int iNo)
{
    int iCnt = 0;

    //updator
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
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

    EvenFactor(iValue);
    
    return 0;
}