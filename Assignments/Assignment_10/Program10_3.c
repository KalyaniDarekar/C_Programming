// ////////////////////////////////////////////////////////////////
//
// Function Name : KMtoMeter
// Description   : Convert the KM to Meter
// Input         : Enter Distance: 10
// Output        : Distance in Meter is : 10000
// Author        : Darekar Kalyani Rajendra
// Date          : 2/11/2026
//
// ////////////////////////////////////////////////////////////////

#include <stdio.h>

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMtr = 0;
    
    iMtr = iNo * 1000;
    
    return iMtr;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Distance:\n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is : %d", iRet);
    return 0;
}