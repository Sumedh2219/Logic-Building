/*
  Problem Statment : Write a program which accept number from user and return summation of its non factors.
*/



#include<stdio.h>

int SumNonFact(int iNo)
{
     int iCnt = 0;
     int iNonSum = 0;

     for(iCnt = 1; iCnt <= iNo; iCnt++)
     {
        if(iNo % iCnt != 0)
        {
          iNonSum = iNonSum + iCnt;
        }
     }
     return iNonSum;


}
int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Number : ");
   scanf("%d",&iValue);

   iRet = SumNonFact(iValue);

   printf("Summation of all non factors is : %d",iRet);


    return 0;
}



/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number : 12
Summation of all non factors is : 50

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number : 10
Summation of all non factors is : 37

*/