/*
  Problem Statment : Write a program which returns diffrence between Even and Odd Factorial .
*/



#include<stdio.h>

int OddFactorial(int iNo)
{

    int iCnt = 0;
    int iEvenFact = 1;
    int iOddFact = 1;
    int iDiffrence = 0;

    if(iNo < 0)
    {
       iNo = -iNo;
    }
   
        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 0)
            {
                 iEvenFact = iEvenFact * iCnt;
            }
           
        }

         for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            if(iCnt % 2 == 1)
            {
                 iOddFact = iOddFact * iCnt;
            }
           
        }
        iDiffrence = iEvenFact - iOddFact;
   
    return iDiffrence;
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
Factorial Of Number Is -7

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :-5
Factorial Of Number Is -7

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :10
Factorial Of Number Is 2895

*/





