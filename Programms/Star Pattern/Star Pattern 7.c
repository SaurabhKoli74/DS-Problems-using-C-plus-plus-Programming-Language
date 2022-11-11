#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the no. of rows :\n");
    scanf("%d", &rows);
    int num = 1;

    for (int i = 1; i <= rows; i++)
    {
        num=1;
        for (int j = 1; j < 2 * rows; j++)
        {
            if (j > ((((2 * rows) - 1) / 2) - i) && (j < (((2 * rows) - 1) / 2) + i))
            {
                printf("%d", num);
                j < (((2 * rows) - 1) / 2) ? num++ : num--;
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