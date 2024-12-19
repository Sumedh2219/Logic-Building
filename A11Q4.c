/*
 Problem Statment : Write a program which acccept number from user and count
                   frequency of 4 in it.
*/

#include <stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCounter = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 4)
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

    iRet = CountFour(iValue);

    printf("Frequency of Four Is :%d", iRet);

    return 0;
}

/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :2395
Frequency of Four Is :0

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :2345
Frequency of Four Is :1

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :4430
Frequency of Four Is :2

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :6090
Frequency of Four Is :0

*/