#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    // Logic
    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 == 0)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is: %d\n", iRet);

    return 0;
}

/*
Time Complexity: O(n)
Explanation: Single loop from n to 1.
*/
