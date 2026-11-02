// ////////////////////////////////////////////////////////////////
//
// Function Name : Number
// Description   : accept N Number from user and print small if iNo <50 ,
// print small, if iNo >50 and iNo<100 print medium, if iNo>100 print large
// Input         : An integer
// Output        : small,large,medium
// Author        : Darekar Kalyani Rajendra
// Date          : 31/10/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>

void Number (int iNo)
{
    if (iNo<0)
    {
       iNo=-iNo;
    }
int iCnt = 0;

    if (iNo<50)
    {
        printf("Small");
    }
    else if (iNo>50 && iNo<100)
    {
        printf("Medium");
    }
    else if (iNo>100)
    {
        printf("Large");
    }
}


int main()
{
    int iValue = 0;
    printf("Enter number: ");
    scanf("%d",&iValue);
    Number(iValue);

    return 0;
}