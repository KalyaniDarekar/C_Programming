// ////////////////////////////////////////////////////////////////
//
// Function Name : DisplayEvenFactor
// Description   : Displays the even factors of an integer.
// Input         : An integer
// Output        : The even factors of the integer
// Author        : Kalyani Rajendra Darekar
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
void DisplayEvenFactor(int iNo)
{
    int i = 0;
    if (iNo <=0)
    {
        iNo = -iNo;
    }
    for(i = 1; i <iNo; i++)
    {
        if(( i%2 == 0 )&& ( iNo%i==0  ))
        {
            printf("%d",i);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);
    DisplayEvenFactor(iValue);
    return 0;
}