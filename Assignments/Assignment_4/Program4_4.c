#include <stdio.h>
#include <stdlib.h>

void CheckVotingEligiility(int iAge)
{
if (iAge <= 5 )
{
    printf("Invalid Age");
}
else if (iAge < 18)
{
    printf("Not Eligible for Voting");
}
else 
{
    printf(" Eligible for Voting"); 
}
}

int main()
{
int iAge = 0;
printf("Enter Your Age:");
scanf("%d",&iAge);
CheckVotingEligiility(iAge);
 return EXIT_SUCCESS;

}