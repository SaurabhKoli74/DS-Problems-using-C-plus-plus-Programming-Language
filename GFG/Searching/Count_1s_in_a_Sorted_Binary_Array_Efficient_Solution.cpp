
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Efficient_Solution
//O(logn)

int count(vector<int> arr)
{
    int mid;
    int low = 0;
    int high = arr.size() - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == 0)
        {
            low = mid + 1;
        }
        else
        {
            if (mid == 0 || arr[mid - 1] == 0)
            {
                return (arr.size() - mid);
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    return 0;
}

int main()
{
    vector<int> arr = {0, 0, 0};
    cout << count(arr);
    return 0;
}