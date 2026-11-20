
///////////////////////////////////////////////////
// Function name : DisplayASCII
// Description   : Display ASCII table
//                 
// Input         : 
// Output        : 
// Author        : Darekar Kalyani Rajendra
// Date          : 20/11/2026
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
void DisplayASCII()
{
    int iCnt = 0 ;

    printf("Symbole\tDecimal\tHexadecimal\tOctal\n");

    for(iCnt = 0 ; iCnt <= 255 ; iCnt++)
    {
        printf("%c\t%d\t%x\t%o\t\n",iCnt,iCnt,iCnt,iCnt);
    }
}
int main()
{
    DisplayASCII();

    return EXIT_SUCCESS;
}