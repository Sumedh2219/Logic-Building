/*
 Problem Statment : write a program which accept number from user and return the count of
                    even digit.
*/

#include <stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCounter = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iCounter++;
        }
        iNo = iNo / 10;
    }
    return iCounter;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d", &iValue);

    iRet = CountEven(iValue);
    printf("Number Of Even Digits Are :%d", iRet);

    return 0;
}

/*

 C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :2395
Number Of Even Digits Are :1

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :12567
Number Of Even Digits Are :2

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :3579
Number Of Even Digits Are :0

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :1030
Number Of Even Digits Are :2

*/