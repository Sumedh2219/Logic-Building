/*
 Problem Statment : Write a program which accept radius of circle from user and calculate its area 
                   (consider value of PI as 3.14)
*/


#include<stdio.h>

double CircleArea(float fRadius)
{
    double dResult = 0.0;

    dResult = 3.14 * fRadius * fRadius;

    return dResult;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Radius :");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);
    printf("Area Of Circle Is %lf",dRet);

    return 0;
}







/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Radius :5.3
Area Of Circle Is 88.202606

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Radius :10.4
Area Of Circle Is 339.622375

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Radius :5
Area Of Circle Is 78.500000

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Radius :2
Area Of Circle Is 12.560000

*/