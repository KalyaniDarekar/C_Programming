// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : accept Single digit number from user and print it into word
// Input         : 9
// Output        : Nine
// Author        : Darekar Kalyani Rajendra
// Date          : 02/10/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display (int iNo)
{
    if (iNo<0)
    {
       iNo=-iNo;
    }
    if(iNo>9)
    {
      printf("Invalid input");
    }
    
}


int main()
{
    int iValue = 0;
    printf("Enter single digit number: ");
    scanf("%d",&iValue);
    Number(iValue);

    return 0;
}