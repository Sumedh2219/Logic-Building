/*
   Problem Statment : Write a program which accept range from user and display all even numbers between the range
*/



#include <stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
  int iCnt = 0;
  if (iStart > iEnd)
  {
    printf("Invalid Range..");
  }
  for (iCnt = iStart; iCnt <= iEnd; iCnt++)
  {
    if(iCnt % 2 == 0)
    {
         printf("%d\t", iCnt);
    }
    
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter Starting Point : ");
  scanf("%d", &iValue1);

  printf("Enter Ending Point : ");
  scanf("%d", &iValue2);

  RangeDisplayEven(iValue1, iValue2);

  return 0;
}



/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Starting Point : 23
Enter Ending Point : 35
24      26      28      30      32      34

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Starting Point : 10
Enter Ending Point : 18
10      12      14      16      18

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Starting Point : -10
Enter Ending Point : 2
-10     -8      -6      -4      -2      0       2

*/
