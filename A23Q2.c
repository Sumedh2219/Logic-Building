
/*
  Problem Statment : Accept number of rows and number of columns from user and display below
                     pattern.

    Input : iRow = 4   iCol = 4

    Output :    A       B       C       D
                a       b       c       d
                A       B       C       D
                a       b       c       d             
*/


#include<stdio.h>

void Display(int iRow, int iCol)
{
   int i= 0, j = 0;
   char ch1 = 'A';
   char ch2 = 'a';
   for(i = 1; i <= iRow; i++)
   {
       for(j =1, ch1 = 'A', ch2 = 'a'; j <= iCol; j++)
       {
          if(i % 2 == 1)
          {
            printf("%c\t",ch1);
            ch1++;
          }
          else
          {
            printf("%c\t",ch2);
            ch2++;
          }
       }
       printf("\n");
       // ch++;
   }
}
int main()
{
   int iValue1 = 0, iValue2 = 0;

   printf("Enter number of rows : ");
   scanf("%d",&iValue1);

   printf("Enter number of column :");
   scanf("%d",&iValue2);

   Display(iValue1, iValue2);


    return 0;
}


/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe

Enter number of rows : 4
Enter number of column :4

A       B       C       D
a       b       c       d
A       B       C       D
a       b       c       d

*/