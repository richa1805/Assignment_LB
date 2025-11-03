/* Program  : accept num and display its multiplication of factors */

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0 , iMult = 1;

    //updator
    if(iNo <= 0)
    {
        iNo = -iNo;
    }


    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult = iCnt * iMult;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication is : %d\n",iRet);
    
    return 0;
}