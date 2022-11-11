#include <bits/stdc++.h>
using namespace std;
//Sorted (Binary_Search)
//Binary_search inbuilt function dont work on vector
// T.C = O(logn)
int binarysearch(vector<int> arr, int key)
{
    int low = 0;
    int high = arr.size() - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            low = mid + 1;
        }
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int key = 10;
    cout << binarysearch(arr, key);

        return 0;
}