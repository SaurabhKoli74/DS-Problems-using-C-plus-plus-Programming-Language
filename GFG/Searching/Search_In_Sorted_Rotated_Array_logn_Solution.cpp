#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//T.C = O(logn)
int search(vector<int> arr, int x)
{
    int mid, low = 0, high = arr.size() - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[low] < arr[mid]) //  left_part_is_sorted
        {
            if (x >= arr[low] && x < arr[mid])
            {
                high = mid - 1;
            }
            else
                low = mid + 1;
        }
        else //                      Right_Part_is_Sorted
        {
            if (x > arr[mid] && x <= arr[high])
            {
                low = mid + 1;
            }
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {3, 4, 5, 6, 1, 2};
    int x = 10;
    cout << search(arr, x);
}