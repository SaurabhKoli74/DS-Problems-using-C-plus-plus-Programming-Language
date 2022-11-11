#include <stdio.h>
int main()
{
    //2d array means rows and columns
    int marks[2][4] = {{25, 56, 45, 88}, {66, 45, 58, 85}};

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("enter the marks of student %d\n", i);
    //      scanf("%d", &marks[i]);
    //  }
    // for (int i = 0; i < 4; i++)
    // {
    //      printf("The marks of student %d is %d\n", i, marks[i]);
    //}
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {

            //    printf("The value of %d %d is %d\n", i, j, marks[i][j]);
            printf("%d      ", marks[i][j]);
        }
        printf("\n");
    }

    return 0;
}
