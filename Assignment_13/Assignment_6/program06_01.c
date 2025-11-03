#include <stdio.h>

int main()
{
    char Name[50];

    printf("Please enter your full name: ");
    gets(Name); // or use fgets(Name, 50, stdin);

    printf("Your name is: %s\n", Name);

    return 0;
}
