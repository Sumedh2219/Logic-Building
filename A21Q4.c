/*
  Problem Statment : Accept number of rows and number of columns from user and display below
                     pattern.

    Input : iRow = 5   iCol = 5

    Output :    1  2  3  4  5
                1  2        5
                1     3     5
                1        4  5
                1  2  3  4  5    
*/

#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i, j;
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i == 1 || i == iRow || j == 1 || j == iCol || i == j)
                printf("%d\t", j);
            else
                printf(" \t");
        }
        printf("\n");
    }
}

int main()
{
    int iRow = 5, iCol = 5;

    Display(iRow, iCol);

    return 0;
}


/*
C:\Users\Hp\OneDrive\Desktop\Assign>Myexe

1       2       3       4       5
1       2                       5
1               3               5
1                       4       5
1       2       3       4       5

*/