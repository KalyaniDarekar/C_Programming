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
