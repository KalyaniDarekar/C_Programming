#include <stdio.h>
#include <stdlib.h>

void CheckDivisibility(int iValue)
{
if((iValue%3 == 0 )&& (iValue%5 != 0 ) )
    {
printf("Number is Divisible by 3 only");
    }
else if ((iValue%3 != 0 )&& (iValue%5 == 0 ) )
    {
printf("Number is Divisible by 5 only");
    }
else if((iValue%3 == 0 )&& (iValue%5 == 0 ) )
{
    printf("Number is Divisible by Both");
}
else 
{
    printf("Number is Not  Divisible by Either");
}
}
int main ()
{
    int iValue = 0;
    printf("Enter a number :");
    scanf("%d",&iValue);
    CheckDivisibility(iValue);
    return EXIT_SUCCESS;

}