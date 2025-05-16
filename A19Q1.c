/*
 Problem Statment : Accept number of rows and number of columns from user and display below

 Input : iRow = 4  iCol = 4

 OutPut : * # # # 
          * * # #
          * * * #
          * * * *
*/


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i < j)
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
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows :");
    scanf("%d",&iValue1);

    printf("Enter number of columns :");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);



    return 0;
}


/*
 Test Case : 

 C:\Users\Hp\OneDrive\Desktop\Assign>Myexe

Enter number of rows :4
Enter number of columns :4

*       #       #       #
*       *       #       #
*       *       *       #
*       *       *       *

*/