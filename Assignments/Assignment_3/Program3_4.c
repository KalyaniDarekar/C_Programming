// ////////////////////////////////////////////////////////////////
//
// Function Name : DisplayConvert
// Description   : Converts a lowercase letter to uppercase or vice versa.
// Input         : An alphabetic character
// Output        : The character with its case converted
// Author        : Kalyani Rajendra Darekar
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
void DisplayConvert(char cValue)
{
    if  (cValue >= 'A' && cValue <= 'Z')  
    {
        cValue = cValue+32;
        printf("%c",cValue);
    }
    else if  (cValue >= 'a' && cValue <= 'z')  
    {
        cValue = cValue - 32;
        printf("%c",cValue);
    }
}
int main()
{
    char cValue = '\0';
    printf("Enter character \n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0 ;
    
}