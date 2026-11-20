///////////////////////////////////////////////////
// Function name : DisplayShedule
// Description   : Accept division of student from user
//                 and display exam time according to division
// Input         : C
// Output        : Your exam at 9.20 AM
// Author        : Darekar Kalyani Rajendra
// Date          : 20/11/2026
///////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int BOOL ;

BOOL ChkSmall(char ch ) 
{
    if(ch >= 91 && ch <= 122)
    {
        return true ;
    }
    else
    {
        return false ;
    }
}
int main()
{
    char cValue = '\0';
    BOOL bRet = false ; 

    printf("Enter character :");
    scanf("%c",&cValue);

    bRet = ChkSmall(cValue);

    if(bRet == true )
    {
        printf("It is Small case character");
    }
    else
    {
        printf("It is not Small case character");
    }

    return EXIT_SUCCESS;
}