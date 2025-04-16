/*
   Problem Statment : Accept N numbers from user and return frequency of even numbers
*/

#include <stdio.h>
#include <stdlib.h>

int EvenElements(int Arr[], int iSize)
{
    int iCnt = 0;
    int iEvenCount = 0;
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 2 == 0)
        {
            iEvenCount++;
        }
    }
    return iEvenCount;
}
int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements :\n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the %d elements :\n",iLength);
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter the element %d:", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    iRet = EvenElements(ptr, iLength);
    printf("Frequency of even elements is:%d", iRet);

    free(ptr);

    return 0;
}









/*
Test Case:

C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number of elements :
6
Enter the 6 elements :
Enter the element 1:85
Enter the element 2:66
Enter the element 3:3
Enter the element 4:80
Enter the element 5:93
Enter the element 6:88
Frequency of even elements is:3
*/
