/* Program  : accept num and display its factors in decreasing order */

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;

    //updator
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    iCnt = iNo;
    while(iCnt > 0)
    {
        if((iNo % iCnt == 0) && (iCnt != iNo))
        {
            printf("%d\t",iCnt);
        }
        iCnt--;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    FactRev(iValue);
    
    return 0;
}