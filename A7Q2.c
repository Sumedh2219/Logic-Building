/*
 Problem Statment : Accept number in US dollor and return its corresponding value in Indian currency (consider 1$ = 70 ruppes).

 Input : 10
 Output : 700
*/

#include<stdio.h>

int DollorToINR(int iNo)
{
   int iRuppes = 0;
   iRuppes = iNo * 70;

   return iRuppes ;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : ");
    scanf("%d",&iValue);

    iRet = DollorToINR(iValue);
    printf("Value of INR is %d",iRet);



    return 0;
}



/*
C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number : 10
Value of INR is 700

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number : 3
Value of INR is 210

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number : 12
Value of INR is 840

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number : 1200
Value of INR is 84000

*/