/*
  Problem Statment : Accept number of rows and number of columns from user and display below
                     pattern.

    Input : iRow = 4   iCol = 3

    Output :    5  4  3  2  1
                5  4  3  2  1
                5  4  3  2  1
*/


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = iCol; j >= 1; j--)
        {
            printf("%d\t",j);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 3, iValue2 = 5;

    Display(iValue1,iValue2);


    return 0;
}


/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
5       4       3       2       1
5       4       3       2       1
5       4       3       2       1

*/