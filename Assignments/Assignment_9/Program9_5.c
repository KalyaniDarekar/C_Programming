
// ////////////////////////////////////////////////////////////////
//
// Function Name : FactorialDifference
// Description   :to find odd factorial of given number
// Input         : An integer
// Output        : odd factorial of that integer
// Author        : Darekar Kalyani Rajendra
// Date          : 02/11/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>

int OddFactorial(int iNo)
{
    if (iNo<0)
    {
       iNo=-iNo;
    }
    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if (iCnt%2==0)
        {
         iEvenFact = iEvenFact*iCnt;
        }
       
    }
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if (iCnt%2!=0)
        {
          iOddFact = iOddFact*iCnt;
        }
       
    }
    
    

    return iEvenFact-iOddFact;;
}


int main()
{
    int iValue = 0 , iRet = 0;
    printf("Enter  number: ");
    scanf("%d",&iValue);
    iRet = OddFactorial(iValue);
    printf("Odd Factorial of number is :%d",iRet);


    return 0;
}
   