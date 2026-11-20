///////////////////////////////////////////////////
// Function name : ChkSpecial
// Description   : Accept character from user and 
//                 check whether it is special symbol or not
// Input         : %
// Output        : True
// Author        : Darekar Kalyani Rajendra
// Date          : 20/11/2026
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkSpecial(char ch )
{
    if( (ch == '!') || (ch == '@') || (ch == '#') || (ch == '$') ||
        (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*') )
    {
        return true ;
    }
    else
    {
        return false;
    }
}
int main()
{
    
    char cValue;
    bool bRet = FALSE;



    printf("Enter character: ");
    scanf(" %c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is Special symbol ");
    }
    else
    {
        printf("It is not Special symbol");
    }

     return 0;
}