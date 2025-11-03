/* Program  : Check leap year */

#include<stdio.h>
#include<stdbool.h>

bool CheckLeapYear(int year)
{
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    bRet = CheckLeapYear(iValue);

    if(bRet == true)
    {
        printf("%d is leap year\n", iValue);
    }
    else
    {
        printf("%d is not leap year\n", iValue);
    }

    return 0;
}