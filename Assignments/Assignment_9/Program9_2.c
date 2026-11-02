// ////////////////////////////////////////////////////////////////
//
// Function Name :DollarToINR
// Description   : accept an amount in dollar and display that amount in indian rupees 
// Input         : amount in doallar
// Output        : indian rupees
// Author        : Darekar Kalyani Rajendra
// Date          : 02/10/2026
//
// ////////////////////////////////////////////////////////////////

#include <stdio.h>

void DollarToINR(int iNo)
{
   int $ = 70;
   int iResult = 0;
    if (iNo<0)
    {
       iNo=-iNo;
    }
    iResult = iNo * $;
    printf("Indian Rupees: %d\n",iResult);
    }
int main()
{
    int iValue = 0;
    printf("Enter amount :");
    scanf("%d",&iValue);
   DollarToINR(iValue);
    return 0;
}