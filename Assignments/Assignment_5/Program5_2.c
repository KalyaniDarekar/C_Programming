// ////////////////////////////////////////////////////////////////
//
// Function Name : CheckLeapYear
// Description   : Displays the year is Leap or not.
// Input         : An Year.
// Output        : Which is Leap Year.
// Author        : Darekar Kalyani Rajendra
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear <=0 )
    {
        printf("Invalid");
    }
    else if((iYear% 400==0 )||( (iYear% 4==0 )) && (iYear%100 != 0))
    {
        printf("Leap Year");
    }
    else 
    {
       printf("not Leap Year");
    }
}
int main ()
{
    int iYear = 0;
    printf("Enter Year :");
    scanf("%d",&iYear);
    CheckLeapYear(iYear);
    return EXIT_SUCCESS;

}