// ////////////////////////////////////////////////////////////////
//
// Function Name : CheckAdmission
// Description   : Checks Student eligible or not for the admission.
// Input         : Marks and Age
// Output        : Eligible/Not Eligible
// Author        : Darekar Kalyani Rajendra
// Date          : 21/10/2026
//
// ////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if ((fMarks >= 60) && (iAge >= 17))
    {
        printf("Eligible for admission\n");
    }
    else
    {
        printf("Not Eligible for admission\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter Marks and Age: ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}