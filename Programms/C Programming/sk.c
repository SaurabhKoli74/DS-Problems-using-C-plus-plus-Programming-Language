#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int a;
int main()
{
    // int *ptr;
    // ptr = (int *)(malloc)(3 * sizeof(int));
    // ptr[0] = 32;

    // //for (int i = 0; i < 3; i++)
    // //{
    // //   printf("Enter the values\n");
    // //   scanf("%d", &ptr[i]);
    // // }
    // printf("ptr is %d", ptr[0]);
    int array[22];
    int *ptr=array;
    ptr[0]=34;
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Enter the value at position %d :", i);
    //     scanf("%d", &ptr[i]);
    // }
    for (int j = 0; j < 5; j++)
    {
        printf("The value at position %d is %d \n", j, *(ptr + j));

    }
    printf("the value of a is %d",a);
    return 0;
}