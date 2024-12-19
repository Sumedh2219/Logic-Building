/*
 Problem Statment : Write a program which acccept number from user and count
                   frequency of such numbers which are less than 6
*/

#include <stdio.h>

int Count(int iNo)
{
    int iDigit = 0;
    int iCounter = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit < 6)
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

    iRet = Count(iValue);

    printf("Frequency of Numbers Less Than Six Are :%d", iRet);

    return 0;
}

/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :1243
Frequency of Numbers Less Than Six Are :4

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :789
Frequency of Numbers Less Than Six Are :0

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :1256
Frequency of Numbers Less Than Six Are :3

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :5677
Frequency of Numbers Less Than Six Are :1

*/