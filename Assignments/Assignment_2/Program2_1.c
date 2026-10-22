// ////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Description   : Displays the given number of asterisks.
// Input         : An integer count
// Output        : A row of asterisks
// Author        : Darekar Kalyani Rajendra
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////

#include <stdio.h>
void Display(int iNo)
{
    int iCnt = 0;
    //writer updater 
    while (iCnt < iNo)
    {
        printf("*");
        iCnt++;
    
    }
}
int main ()
{
    int iValue = 0;
    printf("Enter number ");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;

}