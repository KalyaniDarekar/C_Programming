// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : accept N Number from user and print odd numbers up to N.
// Input         : An integer
// Output        : Odd Numbers up to N
// Author        : Darekar Kalyani Rajendra
// Date          : 30/10/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>

void Pattern (int iNo)
{
    if (iNo<0)
    {
       iNo=-iNo;
    }
int iCnt = 0;
for (iCnt = 1; iCnt <= iNo; iCnt++)
{
    if(iCnt%2!=0)
    {
      
      printf("%d\n ",iCnt);
    }
 
}
}

int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    Pattern(iValue);

    return 0;
}