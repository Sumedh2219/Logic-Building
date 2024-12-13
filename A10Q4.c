/*
 Problem Statment : Write a program which accept range from user and display all numbers in reverse order between the range
*/



#include <stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
  int iCnt = 0;
  if (iStart > iEnd)
  {
    printf("Invalid Range..");
  }
  for (iCnt = iEnd; iCnt >= iStart; iCnt--)
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
35      34      33      32      31      30      29      28      27      26      25      24      23

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Starting Point : -10
Enter Ending Point : 2
2       1       0       -1      -2      -3      -4      -5      -6      -7      -8      -9      -10

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Starting Point : 90
Enter Ending Point : 10
Invalid Range..

*/