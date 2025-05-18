/*
  Problem Statment : Accept number of rows and number of columns from user and display below
                     pattern.

    Input : iRow = 4   iCol = 4

    Output :        1  2  3  4  
                       2  3  4
                          3  4
                             4
*/



#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0, s = 0;
    if(iRow != iCol)
    {
        printf("Invalid Input :");
    }
    for( i = 1; i <= 4; i++)
    {
        for(s = 1; s < i; s++)
        {
            printf(" \t");
        }
        for( j = i; j <= 4; j++)
        {
            printf("%d",j);
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

Enter the number of rows :4
Enter the number of columns :4

1234
 234
  34
   4
*/