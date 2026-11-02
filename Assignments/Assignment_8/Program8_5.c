// ////////////////////////////////////////////////////////////////
//
// Function Name : Table
// Description   : accept an integer and write a table of that number in reverse order 
// Input         : An integer
// Output        : reverse Table of that integer
// Author        : Darekar Kalyani Rajendra
// Date          : 02/10/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>

int TableRev(int iNo)
{
    if (iNo<0)
    {
       iNo=-iNo;
    }
    int iCnt = 0;
    int iResult = 0;
    
   
    for(iCnt=10;iCnt>=1;iCnt--)
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
   
    iRet = TableRev(iValue);
    return 0;
}