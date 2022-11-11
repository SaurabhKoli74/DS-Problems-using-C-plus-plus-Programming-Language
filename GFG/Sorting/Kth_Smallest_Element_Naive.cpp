#include <iostream>
#include <vector>
using namespace std;

// Naive: O(nlogn)
//  Time_Complexity : O(n^2) but in AVERAGE_CASE : O(n)linear so its rocommended
int partition(vector<int> &arr, int l, int h)
{
    int i = l - 1;
    int p = h;
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < arr[p])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[p]);
    return i + 1;
}
int kth_smallest(vector<int> &arr, int key)
{
    int l = 0, r = arr.size() - 1;

    while (l <= r)
    {
        int p = partition(arr, l, r); // lomuto_partition
        if (p == (key - 1))
        {
            return arr[p];
        }
        else if (p > (key - 1))
        {
            r = p - 1;
        }
        else
        {
            l = p + 1;
        }
    }

    return -1;
}
int main()
{
    vector<int> arr = {15, 1, 9, 4, 6, 3, 7};
    int l = 0, h = 6;
    int key = 3;
    cout << kth_smallest(arr, key) << endl;
}