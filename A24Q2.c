/*
  Problem Statment : Accept number of rows and number of columns from user and display below
                     pattern.

    Input : iRow = 4   iCol = 4

    Output :    2  4  6  8  10
                1  3  5  7  9
                2  4  6   8  10
                1  3  5  7  9
*/


#include <stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int i = 0, j = 0, num = 1;
   for(i = 1; i <= iRow; i++)
   {
    if(i % 2 == 0)
           {
              num = 1;
           }   
           else
           {
            num = 2;
           }
       for(j = 1; j <= iCol; j++)
       {
        printf("%d\t",num);
        num += 2;
           
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
Enter number of columns: 5

2       4       6       8       10
1       3       5       7       9
2       4       6       8       10
1       3       5       7       9

*/