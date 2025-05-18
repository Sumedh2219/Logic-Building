/*
  Problem Statment : Accept number of rows and number of columns from user and display below
                     pattern.

    Input : iRow = 6   iCol = 6

    Output :   *  *  *  *  *  * 
               *  *           *
               *     *        *
               *        *     *
               *           *  *
               *  *  *  *  *  *   
*/



#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)
    {
        printf("Invalid Input :");
    }
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow  || j == 1 )
            {
                printf("*\t");
            }
            else if(j == iCol || i == j)
            {
                printf("*\t");
            }
            else
            {
                printf("\t");
            }
        }
        printf("\n");
    }


}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows :");
    scanf("%d",&iValue1);

    printf("Enter the number of columns :");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);


    return 0;
}


/*
C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number of rows :6
Enter the number of columns :6

*       *       *       *       *       *
*       *                               *
*               *                       *
*                       *               *
*                               *       *
*       *       *       *       *       *


*/