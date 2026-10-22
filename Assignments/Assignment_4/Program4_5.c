// ////////////////////////////////////////////////////////////////
//
// Function Name : CheckDivisibility
// Description   : Displays the numbers divisible by 5
// Input         : An integer number
// Output        : Which number is divisible by 5
// Author        : Darekar Kalyani Rajendra
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckDivisibility(int iValue)
{
if(iValue%5 == 0)
{
    printf("Number is Divisible by 5");
}
else 
{
    printf("Number is Not  Divisible by 5");
}
}
int main ()
{
    int iValue = 0;
    printf("Enter a number :");
    scanf("%d",&iValue);
    CheckDivisibility(iValue);
    return EXIT_SUCCESS;

}