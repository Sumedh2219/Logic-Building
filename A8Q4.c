/*
 Prob;em Statment : Write a program which accept temperature in fahrenheit and convert it into celsius
                   (consider : 1 celcius = (fahrenheit - 32) * (5/9))
*/


#include<stdio.h>


double FhToCs(float fTemp)
{
    double dResult = 0;
    dResult = (fTemp-32)* 5/9;
    return dResult;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temprature In Fahrenheit :");
    scanf("%f",&fValue);

    dRet = FhToCs(fValue);
    printf("Temperature In Celsius Is %lf",dRet);

    return 0;
}




/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Temprature In Fahrenheit :10
Temperature In Celsius Is -12.222222

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Temprature In Fahrenheit :34
Temperature In Celsius Is 1.111111

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Temprature In Fahrenheit :5
Temperature In Celsius Is -15.000000

*/