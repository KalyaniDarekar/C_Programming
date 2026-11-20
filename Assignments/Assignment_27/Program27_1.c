
///////////////////////////////////////////////////
// Function name : CountCapital
// Description   : Accept string from user and 
//                 count the number of capital character
// Input         : KalyaniDarekar
// Output        : 2
// Author        : Darekar Kalyani Rajendra
// Date          : 20/11/2026
///////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int CountCapital(char *str)
{
int iCount = 0;
while(*str != '\0')
{
    if(*str >= 65 && *str <= 90)
    {
    iCount++;
   }
     str++;
    
}
   return iCount;
}


int main ()
{
    int iRet = 0;
    char Arr[100]= {'\0'};
    printf("Enter String :\n");
    scanf("%[^'\n']s",Arr);
    iRet = CountCapital(Arr);
    printf("Frequency of capital letters  :%d\n",iRet);



    return EXIT_SUCCESS;
}
