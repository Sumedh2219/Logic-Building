/*
 Problem Statment : Write a program which accept distance in kilometers and convert it into meter(ikm = 1000m).
*/


#include<stdio.h>


int KMToMeter(int iNo)
{
    int iMeters = 0;
    iMeters = iNo * 1000;
    return iMeters;
}
int main()
{
   int iValue = 0;
   int iRet = 0;

   printf("Enter Distance in Kilometers : ");
   scanf("%d",&iValue);

   iRet = KMToMeter(iValue);
   printf("Distance In Meters Is %d",iRet);


    return 0;
}





/*

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Distance in Kilometers : 5
Distance In Meters Is 5000

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Distance in Kilometers : 12
Distance In Meters Is 12000

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter Distance in Kilometers : 14
Distance In Meters Is 14000


*/