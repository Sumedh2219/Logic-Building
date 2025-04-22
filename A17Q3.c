/*
Problem Statment : Write a program to find even factorial of given number.
*/

#include <stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iResult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if (iCnt % 2 == 0)
        {
            iResult = iResult * iCnt;
        }
    }
    return iResult;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);
    printf("Even factorial of given number is :%d", iRet);

    return 0;
}

/*
Test Case :

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number :5
Even factorial of given number is :8


C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number :-5
Even factorial of given number is :8

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number :10
Even factorial of given number is :3840

*/