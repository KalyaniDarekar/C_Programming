// ////////////////////////////////////////////////////////////////
//
// Function Name : CheckCharacterType
// Description   : Displays the type of the Character.
// Input         : An char Alphabet.
// Output        : Display CharacterType.
// Author        : Darekar Kalyani Rajendra
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void CheckCharacterType (char cValue)
{
 if (cValue >= 'A' && cValue <= 'Z')
 {
    printf("Uppercase Alphabate");
 }
  else if (cValue >= 'a' && cValue <= 'z')
{
    printf("Lowercase Alphabate");
}
 else if (cValue >= '0' && cValue <= '9')
 {
printf("Digit");
 }
 else 
 {
printf("special character");
 }
}



int main()
{
    char cValue = '\0';
    printf("Enter a character:");
    scanf("%c",&cValue);
    CheckCharacterType(cValue);
    return EXIT_SUCCESS;

}
