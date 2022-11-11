/*
*****
 ****
  ***
   **
    *
*/

#include <stdio.h>

int main()
{
    int rows;
    printf("Enter no. of rows :\n");
    scanf("%d",&rows);
    for (int i = 1; i <=rows; ++i)
    {
        for (int j = 1; j <=rows; ++j)
        {
            if (j >= i)
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
return 0;
}