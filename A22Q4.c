/*
  Problem Statment : Accept number of rows and number of columns from user and display below
                     pattern.

    Input : iRow = 3   iCol = 4

    Output :    *  #  *  #
                *  #  *  #
                *  #  *  #
                
*/


#include <stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            if (j % 2 == 1)  // Odd column
            {
                printf("*\t ");
            }
            else             // Even column
            {
                printf("#\t ");
            }
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

Enter number of rows: 3
Enter number of columns: 4

*        #       *       #
*        #       *       #
*        #       *       #

*/
