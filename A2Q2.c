/*
  problem statment : accept one number from user and print that number of * on screen.
*/

#include <stdio.h>

void Display(int iNo)
{

  int iCnt = 0;
  if (iNo < 0)
  {
    iNo = -(iNo);
  }
  iCnt = 1;
  while (iNo > 0)
  {
    printf("*");
    iNo--;
  }
}
int main()
{
  int iValue = 0;
  printf("Enter Number");
  scanf("%d", &iValue);

  Display(iValue);
}