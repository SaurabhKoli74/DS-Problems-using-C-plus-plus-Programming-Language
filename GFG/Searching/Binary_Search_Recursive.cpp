#include <bits/stdc++.h>
using namespace std;
//Sorted (Binary_Search)
//Binary_search inbuilt function dont work on vector
// T.C = O(logn)
int binarysearch(vector<int> arr, int low, int high, int key)
{
    int mid;
    if (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            return binarysearch(arr, low, mid - 1, key);
        }
        else
            return binarysearch(arr, mid + 1, high, key);
    }
    
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int key = 5;
    int high = arr.size() - 1;
    cout << binarysearch(arr, 0, high, key);

    return 0;
}