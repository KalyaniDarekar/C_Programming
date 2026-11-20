
///////////////////////////////////////////////////
// Function name : Display
// Description   : Accept character from user if the character is capital then display 
//                 all remaing chacter from that character till Z and if the character is small then 
//                 display the remaining character in reverse order till a  
// Input         : 
// Output        : 
// Author        : Darekar Kalyani Rajendra
// Date          : 20/11/2026
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
void Display (char ch)
{
    int iCnt = 0 ;

    if(ch >= 65 && ch <= 90)
    {
        for(iCnt = ch ; iCnt <= 90 ; iCnt ++)
        {
            printf("%c\t",iCnt);
        }
    }
    else if( ch >= 97 && ch <= 122)
    {
        for(iCnt = ch ; iCnt >=97 ; iCnt--)
        {
            printf("%c\t",iCnt);
        }
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter character:");
    scanf("%c",&cValue);

    Display(cValue);

    return EXIT_SUCCESS;
}