
///////////////////////////////////////////////////
// Function name : CountCapital
// Description   : Accept string from user and 
//                 return the difference between frequence of small and capital letter 
// Input         : KALYani
// Output        : 1
// Author        : Darekar Kalyani Rajendra
// Date          : 20/11/2026
///////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

int Difference(char *str )
{
    int iCapital =0 ;
    int iSmall = 0;
    int iDiffer = 0 ;

    while (*str != '\0')
    {
        if(*str >= 65 && *str <=90)
        {
            iCapital ++;
        }
        else if(*str >= 97 && *str <= 122)
        {
            iSmall++;
        }

        str++;
    }

    iDiffer = iSmall - iCapital ;

    return iDiffer ;
    
}
int main()
{
    char arr[20];
    int iRet = 0 ;

    printf("Enter String :");
    scanf("%[^'\n']s",&arr);

    iRet = Difference(arr);

    printf("%d",iRet);

    return EXIT_SUCCESS ;
}