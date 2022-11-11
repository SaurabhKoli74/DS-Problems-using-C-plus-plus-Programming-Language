// Dynamic Memory Allocation means growing the heap size . its a way to change the data structure in progaram runtime
#include <stdio.h>
#include <stdlib.h> // header file for Dynamic Memory Allocation Functions
int main()
{
    //uSE OF MELLOC
    int *ptr1;
    ptr1 = (int *)malloc(3 * sizeof(int));
    ptr1[0]=45;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value %d :\n", i);
        scanf("%d", &ptr1[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The value %d is %d\n\n", i, ptr1[i]);
    }
    free(ptr1);

    //USE OF CALLOC
    int *ptr;
    ptr = (int *)calloc(3, sizeof(int));
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the value %d\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The value %d is %d\n", i, ptr[i]);
    }
    //  free(ptr); IF WE FREE THE FUNCTION HERE IT WILL DESTROY AND THE MADE POINTER VAR WILL NOT USE BELOW STATEMENT IN REALLOC FUNCTION

    int n;
    // USE OF REALLOC
    printf("Enter How many new size int you want\n");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the no %d\n", i);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value %d is %d\n", i, ptr[i]);
    }
    free(ptr); //USE OF FREE FUNCTION OF DYNAMIC MEMORY ALLOCATION
    return 0;
}
