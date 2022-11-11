#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
//Iterative_Solution = O(n)
//Auxilary_Space_Complexity = theta(1)
int max_profit(vector<int> arr)
{
    int profit = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > arr[i - 1])
        {
            profit += arr[i] - arr[i - 1];
        }
    }
    return profit;
}
int main()
{
    vector<int> arr = {1, 2, 6, 4, 5};

    cout << max_profit(arr);
    return 0;
}