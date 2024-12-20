/*
 Problem Statment : write a program which accept number from user and return the count of
                 digits between 3 and 7.
*/



#include<stdio.h>

int CountBet3And7(int iNo)
{
    int iDigit = 0;
    int iCounter = 0;
    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
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
    scanf("%d",&iValue);


    iRet = CountBet3And7(iValue);
    printf("Count Of Number Between 3 & 7 is :%d",iRet);






    return 0;
}


/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :1245
Count Of Number Between 3 & 7 is :2

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :3213
Count Of Number Between 3 & 7 is :0

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :4586
Count Of Number Between 3 & 7 is :3

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :1122
Count Of Number Between 3 & 7 is :0

*/