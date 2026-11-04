// Accept name from user and print that name
///////////////////////////////////////////////////
//      
//     Funtion name :    MultFact
//     Description  :    Accept name from user and print that name
//     Input        :    kalyani
//     Output       :    kalyani
//     Author       :    Darekar Kalyani Rajendra
//     Date         :    04/11/2026
// 
////////////////////////////////////////////////


#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Name[ 30 ];

    printf("please enter full name ");
    scanf("%[^'\n']s",&Name);

    printf("Your name is %s ",Name );

    return EXIT_SUCCESS;

}