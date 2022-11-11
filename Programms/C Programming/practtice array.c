#include <stdio.h>
int main()
{
    int number[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter the number from 1-9 to store in array %d %d\n\n", i, j);
            scanf("%d\n\n", &number[i][j]);
        }
    }
    printf("\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t\t", number[i][j]);
        }
        printf("\n\n");
    }
    printf("\n\n\n\n\n");

    return 0;
}
