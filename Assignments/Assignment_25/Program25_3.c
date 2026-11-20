///////////////////////////////////////////////////
// Function name : ChkDigit
// Description   : Accept character from user and 
//                 check whether it is Digit or not
// Input         : A
// Output        : True
// Author        : Darekar Kalyani Rajendra
// Date          : 20/11/2026
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdbool.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkDigit (char ch)
{

    if (ch>='0' && ch<='9') 
    {
        return TRUE;
    }


    return FALSE;
}
int main()
{
    
    char cValue;
    bool bRet = FALSE;



    printf("Enter character: ");
    scanf(" %c", &cValue);

    bRet = ChkDigit(cValue);

    if(bRet == TRUE)
    {
        printf("It is Digit ");
    }
    else
    {
        printf("It is not Digit ");
    }

     return 0;
}