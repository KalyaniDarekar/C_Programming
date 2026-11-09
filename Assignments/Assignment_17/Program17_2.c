///////////////////////////////////////////////////
//     Funtion name :    Pattern
//     Description  :    accept number of rows and column and display below patttern 
//     Input        :    iRow =3  iCol =4
//     Output       :    2 4 6 8 10
//                       1 3 5 7 9
//                       2 4 6 8 10
//                       1 3 5 7 9
//     Author       :    Darekar Kalyani Rajendra
//     Date         :    09/11/2026
// 
////////////////////////////////////////////////

#include<stdio.h>
#include <stdlib.h>

void Pattern(int iRow,int iCol)
  {
    int i = 0, j = 0;
    
  
      for(i = 2; i<=10 ;i = i+2)
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
