// ////////////////////////////////////////////////////////////////
//
// Function Name : DisplayDigit
// Description   : Accept the number from user and display the digit in reverse order
// Input         : Enter Number: 1234
// Output        : 4 3 2 1
// Author        : Darekar Kalyani Rajendra
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(int iNo)
{
  if (iNo < 0)
  {
    iNo = -iNo;
  }
  while (iNo > 0)
  {
    int iDigit = iNo % 10;
    printf("%d ", iDigit);
    iNo = iNo / 10;
  }
  
}
int main()
{
    int iValue = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}

