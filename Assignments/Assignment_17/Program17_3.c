///////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number of rows and column and display below patttern 
//     Input        :    iRow =3  iCol =4
//     Output       :    a b c d e
//                       1 2 3 4 5
//                       a b c d e
//                       1 2 3 4 5
//     Author       :    Darekar Kalyani Rajendra
//     Date         :    09/11/2026
// 
////////////////////////////////////////////////

#include<stdio.h>
#include <stdlib.h>

void Pattern(int iRow,int iCol)
  {
    int i = 0, j = 0;
    
  
      for(i = 2; i<=iRow ;i = i++)
      {
        
           for (j = 1; j<=iCol; j = j++)
             {
                
                printf("%d\t",i);
                
              }
                
        printf("\n\n");
      }
      
    }
       
int main()
{
 int iValue1= 0,iValue2;
 printf("Enter Number of Rows and column : \n");
 scanf("%d %d",&iValue1,&iValue2);
 Pattern(iValue1,iValue2);
  return EXIT_SUCCESS;
}
