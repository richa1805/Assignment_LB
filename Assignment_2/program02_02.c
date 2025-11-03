/* Program  : accept num and print that num of * on screen */

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    //updator
    if(iNo < 0) 
    {
        iNo = -iNo;
    }

    iCnt = iNo;
    while(iCnt > 0)
    {
        printf("*");
        iCnt--;
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter Number : ");
    scanf("%d", &iValue);

    Accept(iValue);

    return 0;
}

