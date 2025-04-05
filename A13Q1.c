/*
 Problem Statment : Accept numbers from user and return diffrence between summation of 
                    even elements and summation of odd elements.
*/


#include<stdio.h>
#include<stdlib.h>


int main()
{
    int iLength = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter Number Of Elements :");
    scanf("%d",&iLength);

    p = (int*)malloc(iLength * sizeof(int));

    if(p == NULL)
    {
        printf("Unable To Allocate The Memory");
        return -1;
    }

    printf("Enter %d elements",iLength);

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter The Elements : %d",iCnt + 1);
        scanf("%d",&p[iCnt]);
    }



    return 0;
}