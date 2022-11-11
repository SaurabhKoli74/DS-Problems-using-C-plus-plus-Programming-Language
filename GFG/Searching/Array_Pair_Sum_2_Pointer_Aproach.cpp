//We have to find pair with a given sum x
//For Unsorted array :
//1. Naive_Solution (O(n^2))
//2.Hashing (O(n)) //We will learn this after_wards

//For Sorted array :
//2-Pointer Approach
//O(n)

//For_Sorted_Array:
#include <bits/stdc++.h>
using namespace std;

void pairsum(vector<int> arr, int x)
{
    int start = 0, end = arr.size() - 1, flag = 1;
    while (start < end)
    {
        if (arr[start] + arr[end] == x)
        {
            cout << arr[start] << " + " << arr[end] << " = " << x;
            flag = 0;
            break;
        }
        else if (arr[start] + arr[end] > x)
        {
            end--;
        }
        else
            start++;
    }
    if (flag)
    {
        cout << "-1";
    }
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    int x = 20;
    pairsum(arr, x);
    return 0;
}