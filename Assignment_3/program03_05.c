/* Program  : accept one char and check char is vowel(a,e,i,o,u) or not */

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char cValue)
{
    if((cValue == 'a' || cValue == 'e' || cValue == 'i' || cValue == 'o' || cValue == 'u')
        || (cValue == 'A' || cValue == 'E' || cValue == 'I' || cValue == 'O' || cValue == 'U'))
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
    char cValue = '\0';
    bool bRet = false;

    printf("Enter character : \n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == true)
    {
        printf("It is Vowel\n");
    }
    else
    {
        printf("It is not Vowel\n");
    }

    return 0;
}