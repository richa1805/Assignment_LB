#include<stdio.h>

void NumberSize(int iNo)
{
    // Logic
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if((iNo >= 50) && (iNo < 100))
    {
        printf("Medium\n");
    }
    else
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    NumberSize(iValue);

    return 0;
}

/*
Time Complexity: O(1)
Explanation: Constant number of comparisons.
*/
