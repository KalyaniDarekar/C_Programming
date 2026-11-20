
///////////////////////////////////////////////////
// Function name : Display
// Description   : Accept character from user is the character is small then display 
//                 its Capital and vice versa 
// Input         : 
// Output        : 
// Author        : Darekar Kalyani Rajendra
// Date          : 20/11/2026
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
void Display (char ch)
{
    if(ch >= 65 && ch <= 90)
    {
        ch = ch + 32 ;
        printf("%c",ch);
    }
    else if (ch >= 97 && ch <=122 )
    {
        ch = ch - 32 ;
        printf("%c",ch);
    }
    else
    {
        printf("%c",ch);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter the character ");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS ;
}