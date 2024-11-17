/*
  Problem Statment : Write a program which accept number from user and print that number of $ & * on screen

  Input : 5
  Output : $ * $ * $ * $ * $ *
*/

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t*\t");
    }
}
int main()
{
   int iValue = 0;

   printf("Enter number : ");
   scanf("%d",&iValue);

   Pattern(iValue);

    return 0;
}




/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter number : 5
$       *       $       *       $       *       $       *       $       *

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter number : 3
$       *       $       *       $       *

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter number : -3
$       *       $       *       $       *



*/