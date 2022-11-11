#include <bits/stdc++.h>
using namespace std;

//Based_On_Binary_Search
//our ans will be in the range max(arr) to arr_sum
//Feasible means when we sum the elements from start we will check if sum is greater than mid then we will make one cut likewise
//At the end we will check if no. of cuts are <= k , if true then its feasible Solution
//We will go till low<=high
//At the end there will be a ans

//T.C = O(log(sum-max(arr)))= O(n*log(sum))
bool isFeasible(int arr[], int n, int k, int ans)
{
    int req = 1, sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (sum + arr[i] > ans)
        {
            req++;
            sum = arr[i];
        }
        else
        {
            sum += arr[i];
        }
    }
    return (req <= k);
}

int minPages(int arr[], int n, int k)
{
    int sum = 0, mx = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        mx = max(mx, arr[i]);
    }
    int low = mx, high = sum, res = 0;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (isFeasible(arr, n, k, mid))
        {
            res = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return res;
}

int main()
{
    int arr[] = {10, 20, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 2;

    cout << minPages(arr, n, k);
}
