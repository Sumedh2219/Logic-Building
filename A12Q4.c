/*
Problem Statment : write a program which accept number from user and return the Multiplication
                  of all Digits.
              
*/


#include<stdio.h>

int Multiplication(int iNo)
{
    int iDigit = 0;
    int iMulti = 1;
    while (iNo != 0)
    {
       iDigit = iNo % 10;
       if (iDigit == 0)
       {
         iDigit = 1;
         
       }
       iMulti = iDigit * iMulti;
       
       
       iNo = iNo / 10;
    }
    return iMulti;
    
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);

    iRet = Multiplication(iValue);
    printf("Multiplication Of All Digits Is :%d",iRet);

    return 0;
}

/*

:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :23
Multiplication Of All Digits Is :6

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :602
Multiplication Of All Digits Is :12

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :9440
Multiplication Of All Digits Is :144

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :1234
Multiplication Of All Digits Is :24

*/