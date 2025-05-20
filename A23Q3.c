/*
  Problem Statment : Accept number of rows and number of columns from user and display below
                     pattern.

    Input : iRow = 3   iCol = 5

    Output :    A  A  A  A  A
                B  B  B  B  B
                C  C  C  C  C
*/


#include <stdio.h>

void DisplayPattern(int iRow, int iCol)
{
    char ch = 'A';

    for (int i = 1; i <= iRow; i++)
    {
        for (int j = 1; j <= iCol; j++)
        {
            printf("%c\t", ch);
        }
        printf("\n");
        ch++; // Move to next character
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
