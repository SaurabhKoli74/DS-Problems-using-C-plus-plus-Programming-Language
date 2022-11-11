#include <stdio.h>

int main()
{
     
        int a =1, b=3, c=3, d=1;
    int matrix1[a][b];
    int matrix2[c][d];

    printf("Enter The Number of Rows in Matrix 1\n");
    scanf("%d", &a);
    // getchar();
    printf("Enter The Number of Columns in Matrix 1\n", b);
    scanf("%d", &b);
    // getchar();
    // matrix[2][3]={{2,3,4},{3,4,5}}   example here i is rows and j is col ie 2 and 3 ......
    printf("Enter The Number of Rows in Matrix 2\n");
    scanf("%d", &c);
    // getchar();
    printf("Enter The Number of Columns in Matrix 2\n");
    scanf("%d", &d);
    // getchar();

    if (b != c)
    {
        printf("The Matrix of a Given order is not possible columns of matrix 1 is not equals to rows of matrix 2\n");
    }
    else
    {
        printf("Given Order of 2 matrices can be multiplied ....\n");
        printf("Enter the values of Matrix 1 in Given order :\n");
        for (int i = 0; i < a; i++)
        {
            for (int j = 0; j < b; j++)
            {
                printf("Enter the value at position %d %d in matrix 1\n", i, j);
                scanf("%d", &matrix1[i][j]);
            }
            // getchar();
        }
        printf("\nEnter The values of Matrix 2 in Given order :\n");
        for (int k = 0; k < c; k++)
        {
            for (int l = 0; l < d; l++)
            {
                printf("Enter the value at position %d %d in matrix 2\n", k, l);
                scanf("%d", &matrix2[c][d]);
                // getchar();
            }
            // getchar();
        }
        for (int k = 0; k < c; k++)
        {
            for (int l = 0; l < d; l++)
            {
                // printf("Enter the value at position %d %d in matrix 2\n", k, l);
                printf("%d", matrix2[c][d]);
                // getchar();
            }
            // getchar();
        }

                    
    }
    return 0;
}


/* 
Doubt here not collecting the value at position 3 rd in matrix 2 ??????????
*/

// **** PROGRAM STARTS HERE **** //
/*
#include <stdio.h>

int main()
{
    int a[3][4], b[4][2], result[3][2]; // here we have given the matrix order
                                        // when inputing from user getting error as specified in above comment
    int sum = 0;
    printf("Enter The First Matrix\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            //printf("Enter the value of element %d %d\n", i, j);
            scanf("%d", &a[i][j]);
            // printf("\t");
        }
        // printf("\n");
    }
    printf("Enter The Second Matrix :\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            //printf("Enter the value of element %d %d\n", i, j);
            scanf("%d", &b[i][j]);
            // printf("\t");
        }
        // printf("\n");
    }
    // multiplying the matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // Calculate the result
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j]; // here i represents rows  and k ( Element no) == columns(element no ,, it changes ) and j represents a
                                          //                      column and complets
                                          // the cycle for one row elements to one column elements ,,, and it goes to specific location thats all
            }
            result[i][j] = sum; // here it stores the values
            sum = 0;            // here it becomes zero and again loop cycle starts
        }
    }
    //printing the Resultant Matrix ,,,,
    printf("The Resultant Matrix :\n\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf(" %d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/