// ////////////////////////////////////////////////////////////////
//
// Function Name : PrintEven
// Description   : Displays the first N even numbers.
// Input         : A positive integer N
// Output        : The first N even numbers
// Author        : Kalyani Rajendra Darekar
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
void PrintEven(int iNo)
{
if(iNo <= 0)
{
    return;
}
int iCnt = 0;
for (iCnt = 1; iCnt <=iNo; iCnt++)
{
    printf("%d",iCnt*2);
}
}
int main ()
{
    int iValue = 0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}