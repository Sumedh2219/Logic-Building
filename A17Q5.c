/*
 Problem Statment : Write a program which returns diffrence between even factorial and odd factorial.
*/

#include <stdio.h>

int EvenOddFactorialDiffrence(int iNo)
{
    int iCnt = 0, iResult1 = 1, iResult2 = 1, iDiff = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if (iCnt % 2 == 0)
        {
            iResult1 = iResult1 * iCnt;
        }
    }

    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if (iCnt % 2 == 1)
        {
            iResult2 = iResult2 * iCnt;
        }
    }
    iDiff = iResult1 - iResult2;
    return iDiff;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :");
    scanf("%d", &iValue);

    iRet = EvenOddFactorialDiffrence(iValue);
    printf("Diffrence between Even and Odd factorial of given number is :%d", iRet);

    return 0;
}

/*
Test Case :

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number :5
Diffrence between Even and Odd factorial of given number is :-7

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number :-5
Diffrence between Even and Odd factorial of given number is :-7

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number :10
Diffrence between Even and Odd factorial of given number is :2895

*/