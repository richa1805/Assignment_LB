#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    // Logic
    for(iCnt = 1; iCnt <= 10; iCnt++)
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

    Table(iValue);

    return 0;
}

/*
Time Complexity: O(1)
Explanation: Loop executes fixed 10 times (constant time).
*/
