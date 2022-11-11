//We have given one array and three indexes
//two sorted parts = low to mid , mid+1 to high
//We have to sort these parts in one part
#include <bits/stdc++.h>
using namespace std;

void mergefunction(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1; //+1 cauze index starts from 0
    int n2 = high - mid;    //no need of +1 as we want mid+1 to high

    int left[n1], right[n2];

    for (int i = 0; i < n1; i++) //setting_up_Auxilary_Array
    {
        left[i] = arr[low + i];
    }
    for (int i = 0; i < n2; i++) //setting_up_Auxilary_Array
    {
        right[i] = arr[mid + i + 1];
    }

    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) //Standard_Merge_Logic
    {
        if (left[i] <= right[j])
        {
            arr[k] = left[i];
            i++;
            k++;
        }
        else
        {
            arr[k] = right[j];
            j++;
            k++;
        }
    }
    while (i < n1)
    {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n1)
    {
        arr[k] = right[j];
        j++;
        k++;
    }
}
int main()
{
    int arr[] = {7, 8, 9, 1, 2, 3, 4};
    int low = 0, mid = 2, high = 6;
    mergefunction(arr, low, mid, high);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}