/*
  Problem Statment : Write a program to find even factorial of given number.
*/



#include<stdio.h>

int OddFactorial(int iNo)
{

    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
       iNo = -iNo;
    }
   
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 1)
            {
                 iFact = iFact * iCnt;
            }
           
        }
   
    return iFact;
}
int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Number :");
   scanf("%d",&iValue);
   
   iRet = OddFactorial(iValue);

   printf("Factorial Of Number Is %d ",iRet);

    return 0;
}




/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :5
Factorial Of Number Is 15

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :-5
Factorial Of Number Is 15

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :10
Factorial Of Number Is 945

*/


