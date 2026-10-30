// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : accept N Number from user and print first 5 multiple of N
// Input         : An integer
// Output        : first 5 Multiple of N
// Author        : Darekar Kalyani Rajendra
// Date          : 31/10/2026
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
    
       printf("%d\n", iNo * iCnt);
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