/*
Rows|columns 
             123456789   => No of Columns
             1   *
2            2  ***
3            3 *****
4            4*******  
5            *********

*/
#include <stdio.h>

int main()
{
    int rows;
    printf("Enter The no. Of Rows :\n");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= (2 *rows ) - 1; ++j)
        {
            if ((j > rows - i) && (j < rows + i))
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
