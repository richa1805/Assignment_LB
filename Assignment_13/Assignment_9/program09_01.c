#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    // Print n stars
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    // Print n hashes
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

/*
Time Complexity: O(n)
Explanation: Two consecutive loops each run n times -> O(n) overall.
*/
