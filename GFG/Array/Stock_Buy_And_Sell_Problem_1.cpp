#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
//Recursive_Solution
//Time_Complexity = O(2^n)
int maxprofit(vector<int> arr, int start, int end)
{
    if (end <= start)
    {
        return 0;
    }

    int profit = 0;
    for (int i = start; i < end; i++)
    {
        for (int j = i+1; j <= end; j++)
        {
            if (arr[j] > arr[i])
            {
                int curr_profit = arr[j] - arr[i] + maxprofit(arr, start, i - 1) + maxprofit(arr, j + 1, end);
                profit = max(profit, curr_profit);
            }
        }
    }
    return profit;
}
int main()
{

    vector<int> arr = {1, 5, 34, 8, 12};

    cout << maxprofit(arr, 0, arr.size() - 1);
    return 0;
}