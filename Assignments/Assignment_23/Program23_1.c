

///////////////////////////////////////////////////
// Function name : strlwrx
// Description   : Accept string from user and
//                 convert it into lower case
// Input         : Marvellous Multi OS
// Output        : marvellous multi os
// Author        : Darekar Kalyani Rajendra
// Date          : 18/11/2026
///////////////////////////////////////////////////

#include <stdio.h>
#include <ctype.h>
void strlwrx(char *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        str[i] = tolower((unsigned char)str[i]);
        i++;
    }
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%19[^\n]", arr);

    strlwrx(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}