
///////////////////////////////////////////////////
// Function name : CountSmall
// Description   : Accept string from user and 
//                 count the number of small character
// Input         : KALyani
// Output        : 4
// Author        : Darekar Kalyani Rajendra
// Date          : 20/11/2026
///////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int CountSmall(char *str)
{
int iCount = 0;
while(*str != '\0')
{
    if(*str >= 97 && *str <= 122)
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
    iRet = CountSmall(Arr);
    printf("Frequency of capital letters  :%d\n",iRet);



    return EXIT_SUCCESS;
}
