// ////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplay
// Description   : Accept the number from user and display all the numbers between that range.
// Input         : Enter Range
// Output        : Range of Numbers
// Author        : Darekar Kalyani Rajendra
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
  
   if(iStart > iEnd)
   {
      printf("Invalid Range\n");
      return;
   }
   
   for(iStart = iStart; iStart <= iEnd; iStart++)
   {
      printf("%d\n", iStart);
   }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point:\n");
    scanf("%d", &iValue1);

    printf("Enter Ending Point:\n");
    scanf("%d", &iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}

