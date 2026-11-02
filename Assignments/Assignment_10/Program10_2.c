// ////////////////////////////////////////////////////////////////
//
// Function Name : RectArea
// Description   : Find the Area of the rechangle
// Input         : Width and Height
// Output        : Area of Rectangle
// Author        : Darekar Kalyani Rajendra
// Date          : 2/11/2026
//
// ////////////////////////////////////////////////////////////////

#include<stdio.h>

double RectArea(float fWidth, float fHeight)
{
    double fArea = fWidth * fHeight;

    return fArea;
}

int main()
{
    float fValue1 = 0.0f,fValue2 = 0.0f;
    double dRet = 0;

    printf("Enter width: ");
    scanf("%f", &fValue1);

    printf("Enter Height: ");
    scanf("%f", &fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle: %lf", dRet);

    return 0;
}