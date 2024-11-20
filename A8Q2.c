/*
 Problem Statment : Write a program which accept width and height of the rectangle 
                  from user and clalculate its area(Area = width * height).
*/



#include<stdio.h>

double AreaOfRectangle(float fNo1,float fNo2)
{
    double dResult = 0.0;
    dResult = fNo1 * fNo2;
    return dResult;
}
int main()
{
   float fValue1 = 0.0f, fValue2 = 0.0f;
   double dRet = 0.0;

   printf("Enter Width Of Rectangle :  ");
   scanf("%f",&fValue1);

   printf("Enter Height Of Rectangle :  ");
   scanf("%f",&fValue2);

   dRet = AreaOfRectangle(fValue1,fValue2);
   printf("Area Of Rectangle Is %lf",dRet);

    return 0;
}






/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Width Of Rectangle :  5.3
Enter Height Of Rectangle :  9.78
Area Of Rectangle Is 51.834000

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Width Of Rectangle :  2.3
Enter Height Of Rectangle :  5.4
Area Of Rectangle Is 12.420000

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Width Of Rectangle :  3
Enter Height Of Rectangle :  4
Area Of Rectangle Is 12.000000

*/