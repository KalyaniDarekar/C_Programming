// ////////////////////////////////////////////////////////////////
//
// Function Name : CountFour
// Description   : Accept the number from user and count the frequency of 4 in it
// Input         : Enter Number: 1234
// Output        : 1
// Author        : Darekar Kalyani Rajendra
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountFour(int iNo)
{
  int iCount = 0;
  if (iNo < 0)
  {
    iNo = -iNo;
  }
  while (iNo > 0)
  {
    int iDigit = iNo % 10;
    if (iDigit == 4)
    {
      iCount++;
    }
    
    iNo = iNo / 10;
  }
  return iCount;
  
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number:\n");
    scanf("%d", &iValue);

   iRet =  CountFour(iValue);
    printf("%d\n",iRet);



    return 0;
}

