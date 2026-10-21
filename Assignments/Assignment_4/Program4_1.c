#include <stdio.h>
#include <stdlib.h>

void CheckNumber (int  iValue )
{
    if (iValue==0)
    {
       printf("Zero ");
    }
    else if (iValue<0)
    {
       printf("Number is Negative  ");
    }
    else 
    {
        printf("Number is Positive");
    }
}
int main ()
{
    int iValue = 0;
    printf("Enter a Number: ");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
