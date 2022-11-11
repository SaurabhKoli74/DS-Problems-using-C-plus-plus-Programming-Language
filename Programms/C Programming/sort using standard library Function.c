#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int compare(const void *a,const void *b)
{
    return (*(int *)a>*(int*)b);
}
int main()
{
    int array[5] = {45,48,2,99,87};

    qsort(array,5,sizeof(int),compare);

    for (int i = 0; i <5; i++)
    {
        printf("%d ",array[i]);
    }
    return 0;
    
}