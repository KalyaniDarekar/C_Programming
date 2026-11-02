// ////////////////////////////////////////////////////////////////
//
// Function Name : FhToCs
// Description   : Convert Fahrenheit to Celcius
// Input         : Enter Temperature in Fahrenheit
// Output        : Temperature in Celcius 
// Author        : Darekar Kalyani Rajendra
// Date          : 02/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

double FhToCs(float fTemp)
{
    double dCelcius = 0;
    
    dCelcius = ((fTemp - 32) * (5.0 / 9.0));
    
    return dCelcius;
}

int main()
{
    float fValue = 0.0f;
    float fRet = 0.0f;

    printf("Enter temperature in Fahrenheit:");
    scanf("%f", &fValue);

    fRet = FhToCs(fValue);

    printf("Temperature in Celcius is : %f", fRet);
    return 0;
}