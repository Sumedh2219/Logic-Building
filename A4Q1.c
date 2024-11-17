/*
   problem statment : write a program which accept input from user and display its multiplication of factors.
*/ 
#include<stdio.h>


int DisplayFactMultiplication(int iNo)
{
    int iCnt = 0;
    int iMulti = 1;
    
   for(iCnt = 1; iCnt <= iNo/2; iCnt++)
   {
       if(iNo % iCnt == 0)
       {
         iMulti = iMulti * iCnt ;
         
       }
   }
     return iMulti;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d",&iValue);

    iRet = DisplayFactMultiplication(iValue);

    printf(" Multiplication of  factors are  : %d\n",iRet);

    return 0;
}




/*

Enter Number :
12
 Multiplication of  factors are  : 144

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :
13
 Multiplication of  factors are  : 1

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :
10
 Multiplication of  factors are  : 10


*/