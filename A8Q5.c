/*
 Problem Statment : Write a program which accept area in squarefeet and convert it into squaremeter.
                   (1 Square feet = 0.0929 squaremetr)
*/


#include<stdio.h>


double SquareMeter(int iNo)
{
    double dResult = 0;
    dResult = iNo * 0.0929;
    return dResult;
}
int main()
{
    int  iValue = 0;
    double dRet = 0.0;

    printf("Enter Area in Square Feet :");

    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("Area In Square Meter Is %lf",dRet);




    return 0;
}




/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Area in Square Feet :5
Area In Square Meter Is 0.464500

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Area in Square Feet :7
Area In Square Meter Is 0.650300

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Area in Square Feet :2
Area In Square Meter Is 0.185800

*/