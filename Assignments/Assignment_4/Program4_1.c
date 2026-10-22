// ////////////////////////////////////////////////////////////////
//
// Function Name : CheckNumber
// Description   : Displays the given number is positive or negative
// Input         : An integer number
// Output        : Number is Positive/Negative/Zero
// Author        : Darekar Kalyani Rajendra
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void CheckNumber (int  iValue )
{
    if (iValue==0)
    {
       printf("Zero ");
    }
    else if (iValue<0)
    {
       printf("Number is Negative  ");
    }
    else 
    {
        printf("Number is Positive");
    }
}
int main ()
{
    int iValue = 0;
    printf("Enter a Number: ");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
