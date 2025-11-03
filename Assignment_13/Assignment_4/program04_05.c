/* Program  : accept num and return diff summation of all its factors and non factors */

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iFactSum = 0 , iNonFactSum = 0;

    //updator
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt != iNo))
        {
            iFactSum = iFactSum + iCnt;
        }
        else 
        {
            iNonFactSum = iNonFactSum + iCnt;
        }
        
    }
    return (iFactSum - iNonFactSum);
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Diff is : %d",iRet);
    
    return 0;
}