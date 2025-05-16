/*
 Problem Statment : Accept number of rows and number of columns from user and display below

 Input : iRow = 4  iCol = 4

 OutPut : * * * *
          * * * #
          * * # #
          * # # #
*/



#include<stdio.h>


void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    if(iRow != iCol)
    {
        printf("Invaild input\n");
    }
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(j <= iCol - i - 1 )
            {
                printf("*\t");
            }
            else
            {
                printf("#\t");
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

    Display(iValue1, iValue2);




    return 0;
}
