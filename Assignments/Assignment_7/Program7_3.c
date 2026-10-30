// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : accept Number from user and print its number line 
// Input         : An integer
// Output        : A row of number line 
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
for (iCnt = -iNo; iCnt <= iNo; iCnt++)
{
  printf("%d ",iCnt);
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