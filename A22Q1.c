/*
  Problem Statment : Accept number of rows and number of columns from user and display below
                     pattern.

    Input : iRow = 4   iCol = 3

    Output :    *  *  *  
                *  *  *
                *  *  *
                *  *  *
*/


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 4, iValue2 = 3;

    Display(iValue1,iValue2);


    return 0;
}

/*
C:\Users\Hp\OneDrive\Desktop\Assign>Myexe

*       *       *
*       *       *
*       *       *
*       *       *

*/