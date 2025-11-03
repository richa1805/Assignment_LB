#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    // Logic
    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d\t", iNo * iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    TableRev(iValue);

    return 0;
}

/*
Time Complexity: O(1)
Explanation: Loop executes fixed 10 times (constant time).
*/
