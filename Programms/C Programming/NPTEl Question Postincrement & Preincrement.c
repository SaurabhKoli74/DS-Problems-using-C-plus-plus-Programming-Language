#include <stdio.h>

int main()
{
    int *ptr;
    int a[20] = {1, 2, 3, 4, 5};
    ptr = a;
    printf("%d\n", *ptr);   //1
    printf("%d\n", *ptr++); //1
    printf("%d\n", ++*ptr); //3  // index 1 value incremented by 1
    printf("%d\n", *ptr);   //3
    printf("%d\n", *++ptr); //3
    printf("%d\n", a[1]); //3

    // Note - *ptr++ & *++ptr its only postincre and preincre .
    // ++*ptr is not preincre its value incremented by one
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}