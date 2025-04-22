/*
 Problem Statment : Write a program to find odd factorial of given number.
*/

#include <stdio.h>

int OddFactorial(int iNo)
{
    int iCnt = 0, iResult = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for (iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if (iCnt % 2 == 1)
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

    iRet = OddFactorial(iValue);
    printf("Odd factorial of given number is :%d", iRet);

    return 0;
}

/*
Test Case :

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number :5
Odd factorial of given number is :15

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number :-5
Odd factorial of given number is :15

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number :10
Odd factorial of given number is :945

*/