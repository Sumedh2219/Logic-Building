/*
  Problem Statment : Accept number of rows and number of columns from user and display below
                     pattern.

    Input : iRow = 4   iCol = 5

    Output :    4  4  4  4  4
                3  3  3  3  3
                2  2  2  2  2
                1  1  1  1  1
*/


#include <stdio.h>

void DisplayPattern(int iRow, int iCol)
{
   

    for (int i = iRow; i >= 1; i--)
    {
        for (int j = iCol; j >= 1; j--)
        {
            printf("%d\t", i);
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

4       4       4       4       4
3       3       3       3       3
2       2       2       2       2
1       1       1       1       1

*/