#include<stdio.h>

void DollarToINR(int iNo)
{
    // Logic
    int iINR = 0;
    iINR = iNo * 90;
    printf("Value in INR: %d\n", iINR);
}

int main()
{
    int iValue = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    DollarToINR(iValue);

    return 0;
}

/*
Time Complexity: O(1)
Explanation: Only one multiplication operation.
*/
