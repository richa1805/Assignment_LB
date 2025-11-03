#include <stdio.h>
#include <stdbool.h>

bool ChkEqual(int A, int B)
{
    if(A == B)
        return true;
    else
        return false;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;

    printf("Please enter two numbers:\n");
    scanf("%d %d", &iValue1, &iValue2);

    bRet = ChkEqual(iValue1, iValue2);

    if(bRet == true)
    {
        printf("Equal\n");
    }
    else
    {
        printf("Not Equal\n");
    }

    return 0;
}
