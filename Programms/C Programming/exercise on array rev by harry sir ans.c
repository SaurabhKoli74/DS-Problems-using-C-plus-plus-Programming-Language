#include <stdio.h>
//creating function of array rev
void arrayRev(int array[]) //passing array
{
    int temp;
    for (int i = 0; i < 7 / 2; i++)
    {
        temp = array[i];
        array[i] = array[6 - i];
        array[6 - i] = temp; // or we can dereference but we have to create pointer function (pointer arithmatic)
    }
}
// this function is for showing result both at one time time saving code saving
void func(int arr[])
{
    for (int i = 0; i < 7; i++)
    {
        printf("The value of aray at position %d is %d\n", i, arr[i]);
    }
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    printf("Before reversing\n");
    func(arr);
    arrayRev(arr);
    printf("\n\n Now by reversing\n\n");
    func(arr);
}
