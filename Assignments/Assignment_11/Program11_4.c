// ////////////////////////////////////////////////////////////////
//
// Function Name : RangeSumEVen
// Description   : Accept the number from user and display addition of all the Even numbers between that range.
// Input         : Enter Range
// Output        : Addition of Even Numbers
// Author        : Darekar Kalyani Rajendra
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

int RangeSumEVen(int iStart, int iEnd)
{
int iSum = 0;

if(iStart > iEnd)
{
    printf("Invalid Range\n");
    return 0;
}

for(iStart = iStart; iStart <= iEnd; iStart++)
{
    if(iStart % 2 != 0)
    {
        iStart++;
    }
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

iRet = RangeSumEVen(iValue1, iValue2);

printf("Addition of Even Numbers is : %d\n", iRet);

return 0;

}
