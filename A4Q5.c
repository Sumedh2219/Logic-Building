/*
 Problem Statment : write a program which accept number from user and return driffrence between summation of all its factors and non factors.
*/



#include<stdio.h>

int FactDiff(int iNo)
{
     int iCnt = 0;
     int iSum = 0;
     int iNonSum = 0;
     int iDiff = 0;
     
     for(iCnt = 1; iCnt <= iNo/2; iCnt++)
     {
         if(iNo % iCnt == 0 )
         {
             iSum = iSum + iCnt;
         }
     }

     for(iCnt = 1; iCnt <= iNo; iCnt++)
     {
         if(iNo % iCnt != 0 )
         {
             iNonSum = iNonSum + iCnt;
         }
     }
     iDiff = iSum - iNonSum;
     return iDiff;



}
int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Number : ");
   scanf("%d",&iValue);

   iRet = FactDiff(iValue);

   printf(" Diffrence between Summation of all factors & non factors is : %d",iRet);


    return 0;
}


/*
 
 C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number : 12
 Diffrence between Summation of all factors & non factors is : -34

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number : 10
 Diffrence between Summation of all factors & non factors is : -29

*/

