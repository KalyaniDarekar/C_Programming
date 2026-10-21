#include <stdio.h>
typedef int       ;
#define TRUE 1  
#define FALSE 0 
Void CHKVowel(char   )
{
    if(        )
    {
        return TRUE;

    }
    else 
    {
        return FALSE;
    }
}
int main ()
{
    char cValue = '\0';
    BOOl bRet = FALSE ;
    printf("Enter character \n");
    scanf("%c",&cValue);
    bRet =  CHKVowel(cValue);
    if(bRet ==     )
    {
        printf("It is Vowel ");

    }
    else 
    {
        printf("It is not vowel");
    }
    return 0;

}