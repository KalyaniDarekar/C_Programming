///////////////////////////////////////////////////
// Function name : Reverse
// Description   : Accept string from user and 
//                 display its reverse string
// Input         : kalyani
// Output        : inaylak
// Author        : Darekar Kalyani Rajendra
// Date          : 20/11/2026
///////////////////////////////////////////////////

#include <stdio.h>
#include <ctype.h>
void Reverse(char *str)

{
    char *start = str;
    char *end = str;
    char temp;

    while(*end != '\0')
    {
        end++;
    }

    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}


int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%s[^\n]", arr);

    Reverse(arr);

    printf("Modified string is %s\n", arr);

    return 0;
}