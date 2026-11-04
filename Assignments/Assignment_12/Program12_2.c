// ////////////////////////////////////////////////////////////////
//
// Function Name : ChkZero
// Description   : Accept the number from user and check whether it contains 0 in it or not
// Input         : Enter Number: 1202
// Output        : it Contains Zero
// Author        : Darekar Kalyani Rajendra
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkZero(int iNo)
{
  if (iNo < 0)
  {
    iNo = -iNo;
  }
  while (iNo > 0)
  {
    int iDigit = iNo % 10;
    if (iDigit == 0)
    {
      return TRUE;
    }
    
    iNo = iNo / 10;
  }
  
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter Number:\n");
    scanf("%d", &iValue);
    bRet = ChkZero(iValue);

    if (bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is No 0 \n");
    }

    return 0;
}

