#include <bits/stdc++.h>
using namespace std;

//Recursive_Solution
//Naive_Solution
//T.C = Exponential

//Logic : We have to make k-1 cuts in array so that we will compare the sums and take maximum from that
//
int sum(int arr[], int b, int e) //Utility function just to calculate sum
{
    int s = 0;
    for (int i = b; i <= e; i++)
        s += arr[i];
    return s;
}

int minPages(int arr[], int n, int k)
{
    if (k == 1) //Base_Case
        return sum(arr, 0, n - 1);
    if (n == 1) //Base_Case
        return arr[0];
    int res = INT_MAX;
    for (int i = 1; i < n; i++)
    {
        res = min(res, max(minPages(arr, i, k - 1), sum(arr, i, n - 1)));
    }
    return res;
}

int main()
{
    
    int arr[] = {10, 20, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1;
    cout << minPages(arr, n, k);

}
