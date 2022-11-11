/*
Rows|columns 
             123456789   => No of Columns
             1   *
2            2  * *
3            3 * * *
4            4* * * *  
5            * * * * *

*/


#include <stdio.h>

int main()
{
    int rows;
    printf("Enter The no. Of Rows :\n");
    scanf("%d", &rows);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= (2 * rows) - 1; ++j)
        {
            if ((j > rows - i) && (j <rows + i))
            {
                printf("*");
                ++j;               // Incremented j value so that we get white space
                printf(" ");       // If we not put it here then white space cant created only incremented 
                
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

/*

// Or we can do by second method ie by switching

#include <stdio.h>

int main()
{
    int num;
    int k = 1;
    printf("Enter The no. Of Rows :\n");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= (2 * num) - 1; ++j)
        {
            if ((j > num - i) && (j <= (num - 1) + i) && k)
            {
                printf("*");
                k = 0;
            }
            else
            {
                printf(" ");
                k = 1;
            }
        }
        printf("\n");
    }
    return 0;
}
*/