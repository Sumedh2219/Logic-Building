/*
 Problem Statment : Accept N numbers from user and return frequency of 11 from it. 
*/


#include <stdio.h>
#include <stdlib.h>

int Frequency(int Arr[], int iSize)
{
    int iCnt = 0, iFrquency = 0;
    

    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iFrquency++;
        }

        
    } 

    return iFrquency;

    
}
int main()
{
    int *ptr = NULL;
    int iLength = 0, iCnt = 0, iRet = 0, iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements : \n");
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
     
     
    iRet = Frequency(ptr,iLength);
    printf("Frequency of 11 is : %d\n",iRet);

    free(ptr);

    return 0;
}





/*

Test Case 1:

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter number of elements :
6
Enter the elements :
85
66
3
15
43
54
Frequency of 11 is : 0

Test Case 2 : 
C:\Users\Hp\OneDrive\Desktop\Assign>gcc A14Q4.c -o Myexe

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter number of elements :
5
Enter the elements :
11
21
11
23
54
Frequency of 11 is : 2
*/