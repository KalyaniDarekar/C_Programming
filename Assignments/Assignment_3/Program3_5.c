#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CHKVowel(char cChar)
{
    if (cChar == 'a' || cChar == 'A' ||
        cChar == 'e' || cChar == 'E' ||
        cChar == 'i' || cChar == 'I' ||
        cChar == 'o' || cChar == 'O' ||
        cChar == 'u' || cChar == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character: \n");
    scanf(" %c", &cValue);

    bRet = CHKVowel(cValue);

    if (bRet == TRUE)
    {
        printf("It is a Vowel\n");
    }
    else
    {
        printf("It is not a Vowel\n");
    }

    return 0;
}