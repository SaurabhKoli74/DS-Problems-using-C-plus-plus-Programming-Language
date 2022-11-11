#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    if (*(int *)a < *(int *)b)
        return -1;
    if (*(int *)a == *(int *)b)
        return 0;
    if (*(int *)a > *(int *)b)
        return 1;
}
int main()
{
    int array[5] = {1,2,3,4,5}; // Array must be Sorted coz Binary Search
    int key;
    key = 45;
    if (bsearch(&key, array, 5, sizeof(int), compare))
        printf("Found");
    else
        printf("Not found");

    return 0;
}