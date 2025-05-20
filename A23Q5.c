/*
  Problem Statment : Accept number of rows and number of columns from user and display below
                     pattern.

    Input : iRow = 3   iCol = 5

    Output :    1  2  3  4 
                5  6  7  8
                9  10 11 12
*/


#include <stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    int num = 1;

    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            printf("%-3d", num);  // Left-aligned for better spacing
            num++;
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

1  2  3  4
5  6  7  8
9  10 11 12

*/