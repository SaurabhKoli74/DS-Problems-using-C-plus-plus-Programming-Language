#include <iostream>
using namespace std;

int partition(int arr[], int l, int h) // Hoare_Partition
{
    int pivot = arr[l];
    int i = l - 1;
    int j = h + 1;
    while (true)
    {
        do
        {
            i++;

        } while (arr[i] < pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
        {
            return j;
        }
        swap(arr[i], arr[j]);
    }
}
void qsort(int arr[], int l, int h)
{
start:;
    if (l < h)
    {
        int p = partition(arr, l, h);
        qsort(arr, l, p);
        l = p + 1;
        goto start; // Tail_Call_Elimination
    }
}

int main()
{
    int arr[] = {1, 10, 2, 8, 5, 4};
    qsort(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
