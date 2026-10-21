#include <stdio.h>
#include <stdlib.h>

void CheckEvenOdd(int iValue)
{
if (iValue%2 ==0)
{
    printf("Number is Even");
}
else 
{
    printf("Number is odd");
}

}

int main()
{
    int iValue = 0;
    printf("Enter a Number:");
    scanf("%d",&iValue);
    CheckEvenOdd(iValue);
    return EXIT_SUCCESS;

}