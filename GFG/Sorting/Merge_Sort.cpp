#include <iostream>
using namespace std;

//Time_Complexity = theta(nlogn) - theta(n) work at every level - total leveles theta(logn) ==> theta(nlogn)
//Auxilary_Space_Complexity = theta(n) //why not "theta(nlogn)" ---cauze memory get deallocated when function return to its parent call so
//theta(n)
void merge_sort(int[], int = 0, int = 5);
void merge(int arr[], int, int, int);
int main()
{
    int arr[] = {6, 4, 8, 1, 9, 8};
    merge_sort(arr);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

void merge(int arr[], int l, int m, int h)
{
    int n1 = m - l + 1;
    int n2 = h - m;

    // int a1[n1], a2[n2];
    int *a1 = new int[n1];
    int *a2 = new int[n2];
    int i, j, k;
    for (i = 0; i < n1; i++) //Setting_Up_Auxilary_Array
    {
        a1[i] = arr[l + i];
    }

    for (j = 0; j < n2; j++) //Setting_Up_Auxilary_Array
    {
        a2[j] = arr[m + j + 1];
    }

    i = 0, j = 0;
    k = l;
    while (i < n1 && j < n2) //Standard_Merge_Logic
    {
        if (a1[i] <= a2[j])
        {
            arr[k++] = a1[i++];
        }
        else
            arr[k++] = a2[j++];
    }

    while (i < n1)
    {
        arr[k++] = a1[i++];
    }

    while (j < n2)
    {
        arr[k++] = a2[j++];
    }

    delete[] a1,a2;  //thats why Auxilary_Space_is_theta(n)_not_theta(nlogn)
   

    
}
void merge_sort(int arr[], int low, int high)
{
    if (high > low)
    {
        int mid = low + (high - low) / 2; //To_Avoid_Overflow

        merge_sort(arr, low, mid);
        merge_sort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}
