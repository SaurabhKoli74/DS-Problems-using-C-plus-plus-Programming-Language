//Selection_Sort
//Theta(n^2)
//selction_sort_is_basic_idea_for_Heap_sort
//If we do more writes the age of the memory reduces & Epromes conditions memory writes are more imp
//Does_less_Memory_writes_compared_to_Quick_Sort_MergeSort,Insertion_Sort, etc_But_Scold_Cycle_Sort_is
//Optimal_than_Selection_Sort_in_Terms_of_memory_writes
//Not_Stable - When two elements are same then in some cases they will not come
//in order as original order like
//suppose smallest element at last and largest element is first
//and similar element like first element is present in between
//then when we swap first with last
//The sequence will come diff
//It is imp in object sorting
//In-place-algorithm - does not require extra memory space

#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++) // "n-1" cauze last element will be already sorted
    {
        int min_ind = i;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_ind])
            {
                min_ind = j;
            }
        }

        swap(arr[i], arr[min_ind]);
    }
}

int main()
{
    int a[] = {2, 1, 3, 4};
    selectionSort(a, 4);
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}