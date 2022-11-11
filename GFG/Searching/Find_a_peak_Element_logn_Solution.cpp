#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//T.C = O(log(n))
int peak(vector<int> arr)
{
    int low = 0, high = arr.size() - 1, mid;
    int n = arr.size();
    while (low <= high)
    {
        mid = (low + high) / 2;
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        {
            return mid;
        }
        if (mid > 0 && (arr[mid - 1] >= arr[mid]))
        {
            high = mid - 1;
        }
        else
            low = mid + 1;
    }

    return -1; // not needed cauze peak element is must in every set
    //but we have to right as formality
    //otherwise it  will give warning
}

int main()
{
    vector<int> arr = {1, 3, 14, 10, 6, 7};
    cout << peak(arr);
    return 0;
}