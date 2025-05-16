#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0, j = 0;
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if ((i == 2 || i == 3) && (j == 2 || j == 3))
            {
                printf("*\t");
            }
            else
            {
                printf("%d\t", j);
            }
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows :");
    scanf("%d", &iValue1);

    printf("Enter the number of rows :");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}

/*
Test Case :
C:\Users\Hp\OneDrive\Desktop\Assign>Myexe
Enter the number of rows :4
Enter the number of rows :4

1       2       3       4
1       *       *       4
1       *       *       4
1       2       3       4

*/