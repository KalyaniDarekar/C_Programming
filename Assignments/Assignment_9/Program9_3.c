
// ////////////////////////////////////////////////////////////////
//
// Function Name : EvenFactorial
// Description   : Even factorial of given number
// Input         : An integer
// Output        : Even factorial of that integer
// Author        : Darekar Kalyani Rajendra
// Date          : 02/10/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>

int EvenFactorial(int iNo)
{
    if (iNo<0)
    {
       iNo=-iNo;
    }
int iCnt = 0;

    int iFact = 1;
    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if (iCnt%2==0)
        {
          iFact = iFact*iCnt;
        }
       
    }
    

    return iFact;
}


int main()
{
    int iValue = 0 , iRet = 0;
    printf("Enter  number: ");
    scanf("%d",&iValue);
    iRet = EvenFactorial(iValue);
    printf("Even Factorial of number is :%d",iRet);


    return 0;
}
   