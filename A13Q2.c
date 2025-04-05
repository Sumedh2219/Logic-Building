/*
 Problem Statment : Accept N numbers from user and display all such elements which are divisible by 5
*/

#include <stdio.h>
#include <stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt = 0;
    printf("elements divisible by 5 are:\n");
    for (iCnt = 0; iCnt < iSize; iCnt++)
    {
        if (Arr[iCnt] % 5 == 0)
        {
            
            printf("%d\t", Arr[iCnt]);
        }
    }
}
int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int iCnt = 0;

    printf("Enter number of elements:\n");
    scanf("%d", &iLength);

    ptr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the elements:%d\n", iLength);
    for (iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("Enter element %d:", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }

    Display(ptr, iLength);

    free(ptr);

    return 0;
}