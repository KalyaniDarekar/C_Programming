///////////////////////////////////////////////////
// Function name : ChkVowel
// Description   : Accept string from user and 
//                 check whether it contain vowels or not
// Input         : kalyani
// Output        : True
// Author        : Darekar Kalyani Rajendra
// Date          : 20/11/2026
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') ||
           (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u'))
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}
int main()
{
    
    char arr[20];
    bool bRet = FALSE;

    printf("Enter String: ");
    scanf("%[^\'n]s",arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("It contain vowels ");
    }
    else
    {
        printf("It is not contain vowels ");
    }

     return 0;
}