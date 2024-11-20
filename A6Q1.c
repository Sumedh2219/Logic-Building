/*
 Problem Statment : Write a program which accept number from user and if number is less than 50 then print Small , if it is greater than 50 and less than 100 then print Medium , if it is greater than 100 then print Large.
*/



#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number :");
    scanf("%d",&iValue);
    
    Number(iValue);


    return 0;
}






/*
C:\Users\Hp\OneDrive\Desktop\Assign>
Enter Number :45
Small

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :75
Medium

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Number :112
Large




*/