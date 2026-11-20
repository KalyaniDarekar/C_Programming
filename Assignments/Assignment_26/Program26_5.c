///////////////////////////////////////////////////
// Function name : Display
// Description   : Accept character from user and 
//                 display its ASCII value in decimal,hexadecimal and octal
// Input         : A
// Output        : decimal- 65  ,Hexadecimal- 0X41  , Octal- 1010
// Author        : Darekar Kalyani Rajendra
// Date          : 20/11/2026
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display (char ch )
{
    printf("Decimal : %d\n",ch);
    printf("Octal : %o\n",ch);
    printf("Hexadecimal : %X",ch);

}
int main ()
{
    char cValue = '\0';

    printf("Enter character :");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS ;
}