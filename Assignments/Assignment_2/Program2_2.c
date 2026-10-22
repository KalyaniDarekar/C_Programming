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
    //writer Updater 
    while (iNo > 0)
    {
        printf("*");
        iNo--;

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