/* Program  : Check positive negative or Zero */

#include<stdio.h>
#include<stdbool.h>

void CheckNumberType(int iNo)
{
    if(iNo > 0)
    {
        printf("Positive Num\n");
    }
    else if(iNo < 0)
    {
        printf("Negative Num\n");
    }
    else if(iNo == 0)
    {
        printf("Zero Num\n");
    }
}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    CheckNumberType(iValue);

    return 0;
}