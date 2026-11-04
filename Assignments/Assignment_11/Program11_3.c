// ////////////////////////////////////////////////////////////////
//
// Function Name : RangeDisplayEVen
// Description   : Accept the number from user and display addition of all the numbers between that range.
// Input         : Enter Range
// Output        : Addition of Numbers
// Author        : Darekar Kalyani Rajendra
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
int iSum = 0;

if(iStart > iEnd)
{
    printf("Invalid Range\n");
    return 0;
}

for(iStart = iStart; iStart <= iEnd; iStart++)
{
    iSum = iSum + iStart;
}

return iSum;
}

int main()
{
int iValue1 = 0, iValue2 = 0;
int iRet = 0;

printf("Enter Starting Point:\n");
scanf("%d", &iValue1);

printf("Enter Ending Point:\n");
scanf("%d", &iValue2);

iRet = RangeSum(iValue1, iValue2);

printf("Addition of Numbers is : %d\n", iRet);

return 0;

}
