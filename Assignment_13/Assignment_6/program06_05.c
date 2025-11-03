#include <stdio.h>

float Percentage(int Total, int Obtained)
{
    return ((float)Obtained / Total) * 100;
}

int main()
{
    int iTotal = 0, iObtained = 0;
    float fResult = 0.0;

    printf("Please enter total marks: ");
    scanf("%d", &iTotal);

    printf("Please enter obtained marks: ");
    scanf("%d", &iObtained);

    fResult = Percentage(iTotal, iObtained);

    printf("Percentage: %.2f%%\n", fResult);

    return 0;
}
