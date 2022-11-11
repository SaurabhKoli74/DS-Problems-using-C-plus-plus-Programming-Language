#include <stdio.h>
void arrayRev(int *ptr)
{
    // initializing the int
    int temp, temp1, temp2;
    temp = *ptr;
    *ptr = *(ptr + 6);
    *(ptr + 6) = temp;
    temp1 = *(ptr + 1);
    *(ptr + 1) = *(ptr + 5);
    *(ptr + 5) = temp1;
    temp2 = *(ptr + 2);
    *(ptr + 2) = *(ptr + 4);
    *(ptr + 4) = temp2;
    for (int i = 0; i < 7; i++)
    {
        printf("The value of rev array at position %d is %d\n", i, ptr[i]);
    }
}

int main()
{
    int arr[] = {2, 4, 5, 6, 8, 7, 8};
    for (int i = 0; i < 7; i++)
    {
        printf("The array value at positon %d is %d\n", i, arr[i]);
    }

    printf("Now By reversing the array :\n");
    arrayRev(arr);

    return 0;
}
