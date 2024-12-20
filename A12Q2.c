/*
 Problem Statment : write a program which accept number from user and return the count of
                    Odd digit.
*/



#include<stdio.h>


int CountOdd(int iNo)
{
    int iDigit = 0;
    int iCounter = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 != 0)
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

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = CountOdd(iValue);
    printf("Number Of Odd Digits Are :%d",iRet);






    return 0;
}

/*

:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number : 2244
Number Of Odd Digits Are :0

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number : 1237
Number Of Odd Digits Are :3

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number : 1133
Number Of Odd Digits Are :4

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number : 2464
Number Of Odd Digits Are :0

*/