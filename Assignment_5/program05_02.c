/* Program  : accept two num and find maximum */

#include<stdio.h>

int FindMax(int iNo1 , int iNo2)
{
    if(iNo1 < iNo2)
    {
        return iNo2;
    }
    {
        return iNo1;
    }
}

int main()
{
    int iValue1 = 0 , iValue2 = 0, iRet = 0;

    printf("Enter Number 1 : ");
    scanf("%d", &iValue1);

    printf("Enter Number 2 : ");
    scanf("%d", &iValue2);

    iRet = FindMax(iValue1, iValue2);

    printf("Larger Num is %d\n",iRet);

    return 0;
}