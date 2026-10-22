// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays a number the specified number of times.
// Input         : An integer and its display frequency
// Output        : The integer repeated at the given frequency
// Author        : Darekar Kalyani Rajendra
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\n", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter Number: ");
    scanf("%d", &iValue);

    printf("Enter Frequency: ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}