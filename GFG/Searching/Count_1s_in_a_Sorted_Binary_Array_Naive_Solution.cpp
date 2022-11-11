#include <iostream>
#include <bits/stdc++.h>
using namespace std;
//Naive_Solution
//O(n)

int count(vector<int> arr)
{
    int i = 0;
    for (i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            return arr.size() - i;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr = {0, 0, 1, 1, 1, 1, 1};
    cout << count(arr);
    return 0;
}