#include <iostream>
using namespace std;

// T.C : O(nlogn) : Average_Case & Best_Case
// A.S.C : O(1) using space only for recursive_call_stack
int lomuto_Partition(int arr[], int l, int h)
{
    int i = l - 1;
    int j;
    int p = arr[h];
    for (j = l; j <= h - 1; j++)
    {
        if (arr[j] < p)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]);
    return i + 1;
}

void quick_sort(int arr[], int l, int h)
{
start:;
    if (l < h)
    {
        int p = lomuto_Partition(arr, l, h);
        quick_sort(arr, l, p - 1);
        // quick_sort(arr, p + 1, h);
        l = p + 1;
        goto start; // Tail_Call_Elimination
    }
}
int main()
{

    int arr[] = {1, 10, 2, 8, 5, 4};
    quick_sort(arr, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}