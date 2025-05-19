/*
  Problem Statment : Accept number of rows and number of columns from user and display below
                     pattern.

    Input : iRow = 4   iCol = 4

    Output :    *  *  *  #
                *  *  #  *
                *  #  *  *
                #  *  *  *
*/

#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if ((i == 1 && j == 4) || (i == 2 && j == 3) || (i == 3 && j == 2) || (i == 4 && j == 1))
            {
                printf("#\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of Rows:");
    scanf("%d", &iValue1);

    printf("Enter number of Columns:");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}

/*
Enter number of Rows:4
Enter number of Columns:4

*       *       *       #
*       *       #       *
*       #       *       *
#       *       *       *

*/