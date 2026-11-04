// ////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayRev
// Description   : Accept the number from user and display all the numbers between that range in reverse order
// Input         : Enter Range
// Output        : Range of Numbers in reverse order
// Author        : Darekar Kalyani Rajendra
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void RangeDisplayRev(int iStart, int iEnd)
{
   int iCnt = 0;
  
   if(iStart > iEnd)
   {
      printf("Invalid Range\n");
      return;
   }
   
   for(iCnt = iEnd; iCnt >= iStart; iCnt--)
   {
      printf("%d\n", iCnt);
   }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Starting Point:\n");
    scanf("%d", &iValue1);

    printf("Enter Ending Point:\n");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}

