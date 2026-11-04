// ////////////////////////////////////////////////////////////////
//
// Function Name : CountEven
// Description   : Accept the number from user and count of even digit
// Input         : Enter Number: 1278
// Output        : 2
// Author        : Darekar Kalyani Rajendra
// Date          : 04/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountEven(int iNo)
{
  int iCount = 0;
  if (iNo < 0)
  {
    iNo = -iNo;
  }
  while (iNo > 0)
  {
    int iDigit = iNo % 10;
    if (iDigit %2==0)
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

   iRet =  CountEven(iValue);
    printf("%d\n",iRet);



    return 0;
}

