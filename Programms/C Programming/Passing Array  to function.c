#include <stdio.h>
int func1(int array[])
{
    for (int i = 0; i < 4; i++)
    {
        printf("The valur at %d is %d\n", i, array[i]);
    }
}
int func2(int *ptr)
{
    for (int i = 0; i < 4; i++)
    {
        printf("The value at %d is %d\n", i, ptr[i]);
    }
}
int main()
{
    int arr[6] = {21, 25, 26, 24};
    func1(arr);
    func2(arr);
    return 0;
}
