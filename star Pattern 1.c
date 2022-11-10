#include <stdio.h>
/*
     *
    **
   ***

*/
int main()
{
    int rows=0;
    printf("Enter no of Rows :\n");
    scanf("%d",&rows);

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= rows; ++j)
        {
            if (j >rows - i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 9;
}