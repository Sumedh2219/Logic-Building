/*
  Problem Statment : Write a program which accept range from user and display all numbers between the range
*/

#include <stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
  int iCnt = 0;
  if (iStart > iEnd)
  {
    printf("Invalid Range..");
  }
  for (iCnt = iStart; iCnt <= iEnd; iCnt++)
  {
    printf("%d\t", iCnt);
  }
}

int main()
{
  int iValue1 = 0, iValue2 = 0;

  printf("Enter Starting Point : ");
  scanf("%d", &iValue1);

  printf("Enter Ending Point : ");
  scanf("%d", &iValue2);

  RangeDisplay(iValue1, iValue2);

  return 0;
}

/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Starting Point : 23
Enter Ending Point : 35
23      24      25      26      27      28      29      30      31      32      33      34      35

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Starting Point : 10
Enter Ending Point : 10
10

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Starting Point : -10
Enter Ending Point : 2
-10     -9      -8      -7      -6      -5      -4      -3      -2      -1      0       1       2

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Starting Point : 90
Enter Ending Point : 10
Invalid Range..

*/