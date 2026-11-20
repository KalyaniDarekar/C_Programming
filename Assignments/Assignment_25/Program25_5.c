///////////////////////////////////////////////////
// Function name : DisplayShedule
// Description   : Accept division of student from user
//                 and display exam time according to division
// Input         : C
// Output        : Your exam at 9.20 AM
// Author        : Darekar Kalyani Rajendra
// Date          : 20/11/2026
///////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void DisplaySChedule(char chDiv)
{
    if(chDiv == 65 || chDiv == 97)
    {
        printf("Your exam at 7 AM");
    }
    else if (chDiv == 66 || chDiv == 98)
    {
        printf("Your exam at 8.30");
    }
    else if ( chDiv == 67 || chDiv == 99)
    {
        printf("Your exam at 9.20");
    }
    else if ( chDiv == 68 || chDiv == 100)
    {
        printf("Your exam at 10.30");
    }
    else
    {
        printf("Division not excess");
    }
}
int main()
{
    char cValue = '\0';


    printf("Enter Division :");
    scanf("%c",&cValue);

    DisplaySChedule(cValue);

    return EXIT_SUCCESS;

}