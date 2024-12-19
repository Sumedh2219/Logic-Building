/*
 Problem Statment : Write a program which acccept number from user and count
                   frequency of 2 in it.
*/

#include <stdio.h>

int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCounter = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit == 2)
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

    iRet = CountTwo(iValue);

    printf("Frequency of Two Is :%d", iRet);

    return 0;
}

/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :2395
Frequency of Two Is :1

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :1018
Frequency of Two Is :0

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :9000
Frequency of Two Is :0

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :2222
Frequency of Two Is :4

*/