#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 1, iOddFact = 1;

    // Logic
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("Factorial difference is: %d\n", iRet);

    return 0;
}

/*
Time Complexity: O(n)
Explanation: Loop runs once from n to 1, performing constant-time work per iteration.
*/
