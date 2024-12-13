/*
   Problem Statment : Write a program which accept range from user and return addition of
                 all numbers in between the range(range should contains positive numbers only)
*/

#include <stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

   
     if (iStart > iEnd)
    {
        printf("Invalid Range..");
    }
    for (iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
         

        iSum = iSum + iCnt;
    }
    
        return iSum;
    
    
}


int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting Point : ");
    scanf("%d", &iValue1);

    printf("Enter Ending Point : ");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);
    printf("Addition is %d", iRet);

    return 0;
}
