// ////////////////////////////////////////////////////////////////
//
// Function Name : Table
// Description   : accept an integer and write a table of that number 
// Input         : An integer
// Output        : Table of that integer
// Author        : Darekar Kalyani Rajendra
// Date          : 02/11/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>

int Table(int iNo)
{
    if (iNo<0)
    {
       iNo=-iNo;
    }
    int iCnt = 0;
    int iResult = 0;
    
   
    for(iCnt=1;iCnt<=10;iCnt++)
    {
       iResult  = iNo*iCnt;
       
       printf("%d\n",iResult);
    }
    return iResult ;
   

}


int main()
{
    int iValue = 0 , iRet = 0;
    printf("Enter  number: ");
    scanf("%d",&iValue);
   
    iRet = Table(iValue);
    return 0;
}