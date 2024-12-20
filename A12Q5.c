/*
 Problem Statment : write a program which accept number from user and return difference
                    between summation of even digits and summation of odd digits
*/

#include <stdio.h>

int CountDifference(int iNo)
{
    int iDigit = 0;
    int iSumEven = 0;
    int iSumOdd = 0;
    int iDiff = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iSumEven = iSumEven + iDigit;
        }
        if (iDigit % 2 != 0)
        {
            iSumOdd = iSumOdd + iDigit;
        }
        iDiff = iSumEven - iSumOdd;

        iNo = iNo / 10;
    }
    return iDiff;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = CountDifference(iValue);
    printf("Difference Between Even And Odd is :%d", iRet);

    return 0;
}

/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :2395
Difference Between Even And Odd is :-15

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :1018
Difference Between Even And Odd is :6

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :8440
Difference Between Even And Odd is :16

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :5733
Difference Between Even And Odd is :-18

*/