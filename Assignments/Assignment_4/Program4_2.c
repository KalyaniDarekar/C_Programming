// ////////////////////////////////////////////////////////////////
//
// Function Name : ChecEvenOdd
// Description   : Displays the given number is Even or Odd
// Input         : An integer number
// Output        : Number is Even/Odd
// Author        :Darekar Kalyani Rajendra
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
if (iValue%2 ==0)
{
    printf("Number is Even");
}
else 
{
    printf("Number is odd");
}

}

int main()
{
    int iValue = 0;
    printf("Enter a Number:");
    scanf("%d",&iValue);
    CheckEvenOdd(iValue);
    return EXIT_SUCCESS;

}