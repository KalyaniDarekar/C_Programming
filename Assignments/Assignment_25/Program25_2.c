///////////////////////////////////////////////////
// Function name : ChkCapital
// Description   : Accept character from user and 
//                 check whether it is capital or not
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

BOOL ChkCapital (char ch)
{

    if (ch>=65 && ch<=90) 
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

    bRet = ChkCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is Capital ");
    }
    else
    {
        printf("It is not capital ");
    }

     return 0;
}