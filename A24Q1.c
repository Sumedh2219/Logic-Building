/*
  Problem Statment : Accept number of rows and number of columns from user and display below
                     pattern.

    Input : iRow = 4   iCol = 4

    Output :    1  2  3  4
                5  6  7  8 
                9  1  2  3 
                4  5  6  7
*/


#include <stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0, j = 0, num = 1;
   for(i = 1; i <= iRow; i++)
   {
       for(j = 1; j <= iCol; j++)
       {
         printf("%d\t",num);
         num++;

         if(num > 9)
         num = 1;
           
       }
       printf("\n");
   }

   
}

int main()
{
    int iRow = 0, iCol = 0;

    printf("Enter number of rows: ");
    scanf("%d", &iRow);

    printf("Enter number of columns: ");
    scanf("%d", &iCol);

    DisplayPattern(iRow, iCol);

    return 0;
}


/*
C:\Users\Hp\OneDrive\Desktop\Assign>Myexe

Enter number of rows: 4
Enter number of columns: 4

1       2       3       4
5       6       7       8
9       1       2       3
4       5       6       7

*/