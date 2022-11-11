#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//T.C = O(n)
//Naive_Solution
int peak(vector<int> arr)
{
    if (arr.size() == 1)
    {
        return 0;
    }
    if (arr[0] >= arr[1])
    {
        return 0;
    }
    if (arr[arr.size() - 1] > arr[arr.size() - 2])
    {
        return arr.size() - 1;
    }

    for (int i = 1; i < arr.size() - 1; i++)
    {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
        {
            return i;
        }
    }

    return -1; 
}

int main()
{
    vector<int> arr = {1, 3, 14, 10, 6, 4};
    cout << peak(arr);
    return 0;
}