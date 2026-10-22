// ////////////////////////////////////////////////////////////////
//
// Function Name : FindGreater
// Description   : Displays the greater number from two numbers.
// Input         : An integer number
// Output        : Which number is Greater.
// Author        : Darekar Kalyani Rajendra
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
void FindGreater(int iFirst,int iSecond)
{
if(iFirst == iSecond )
{
    printf("Both are Equal ");
}
else if (iFirst>iSecond)
{
    printf("%d is Greater\n",iFirst);
}
else 
{
    printf("%d is Greater\n",iSecond );
}
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    printf("Enter two numbers:");
    scanf("%d %d", &iValue1,&iValue2);
    FindGreater(iValue1,iValue2);
    return EXIT_SUCCESS;

}