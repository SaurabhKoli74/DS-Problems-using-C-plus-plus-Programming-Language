//Insertion_Sort
//O(n^2) worst case
//In-Place and Stable (In-place means no auxilary_Space(extraa space))
//Used in practice for small arrays ( TimSort(python library Fun), Intrasort(QuickSort,InsertionSort,Heap_Sort))
//When Small Arrays use Insertion Sort
//O(n) Best Case

#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int j = i - 1;
        int key = arr[i];
        while (j >= 0 && arr[j] > key) // "arr[j] >= key" then not stable algorithm cauze if its same then also it will swap so order will be desturb
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

int main()
{
    vector<int> arr = {3, 5, 4, 10, 8, 12, 11};
    insertion_sort(arr);

    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}