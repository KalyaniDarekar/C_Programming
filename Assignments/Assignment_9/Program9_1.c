// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : accept an integer and display that times of * and #
// Input         : An integer
// Output        : times of * and #
// Author        : Darekar Kalyani Rajendra
// Date          : 02/11/2026
//
// ////////////////////////////////////////////////////////////////

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    if (iNo<0)
    {
       iNo=-iNo;
    }
    for (iCnt = 1; iCnt <=iNo;iCnt++)
    {
       printf("*");
    }
    for (iCnt = 1; iCnt <=iNo;iCnt++)
    {
       printf("#");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Value:");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}