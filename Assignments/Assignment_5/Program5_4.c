// ////////////////////////////////////////////////////////////////
//
// Function Name : CheckMultipleDivisibility
// Description   : Displays the number divisible by 3 & 5 both.
// Input         : An integer number
// Output        : Which number is divisible by 3 & 5.
// Author        : Darekar Kalyani Rajendra
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
if((iValue%3 == 0 )&& (iValue%5 != 0 ) )
    {
printf("Number is Divisible by 3 only");
    }
else if ((iValue%3 != 0 )&& (iValue%5 == 0 ) )
    {
printf("Number is Divisible by 5 only");
    }
else if((iValue%3 == 0 )&& (iValue%5 == 0 ) )
{
    printf("Number is Divisible by Both");
}
else 
{
    printf("Number is Not  Divisible by Either");
}
}
int main (void)
{
    int iValue = 0;
    printf("Enter a number :");
    scanf("%d",&iValue);
    CheckMultipleDivisibility(iValue);
    return EXIT_SUCCESS;

}