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
    while (iCnt < iNo)
    {
        printf("*\n", iCnt);
        iCnt++;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter Number");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;
}