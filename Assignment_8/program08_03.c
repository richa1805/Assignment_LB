#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    // Logic
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is: %d\n", iRet);

    return 0;
}

/*
Time Complexity: O(n)
Explanation: Loop runs n times (1 to n).
*/
