#include <stdio.h>
int func1(int array[2][2])
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("The value at %d ,%d is %d\n", i, j, array[i][j]);
        }
    }
    
}
/* int func2(int*ptr)

??? How to pass 2d array in the form of pointer */


int main(int argc, char const *argv[])
{
    int arr[2][2] = {{2, 3}, {5, 6}};
    func1(arr);
    return 0;
}
