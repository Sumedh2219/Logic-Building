/*
  Problem Statment : Accept number of rows and number of columns from user and display below
                     pattern.

    Input : iRow = 6   iCol = 6

    Output :   *  *  *  *  *   * 
               *  #  #  #  *   *
               *  #  #  *  $   *
               *  #  *  $  $   *
               *  *  $  $  $   *
               *  *  *  *  *   *   
*/



#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i, j;
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i == 1 || i == iRow || j == 1 || j == iCol)
                printf("*\t");
            else if (i + j == iCol + 1)
                printf("*\t");
            else if (i + j < iCol + 1)
                printf("$\t");
            else
                printf("#\t");
        }
        printf("\n");
    }
}

int main()
{
    int iValue1, iValue2;

    printf("Enter number of Rows: ");
    scanf("%d", &iValue1);

    printf("Enter number of Columns: ");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}



/*
C:\Users\Hp\OneDrive\Desktop\Assign>Myexe

Enter number of Rows: 6
Enter number of Columns: 6

*       *       *       *       *       *
*       $       $       $       *       *
*       $       $       *       #       *
*       $       *       #       #       *
*       *       #       #       #       *
*       *       *       *       *       *

*/
