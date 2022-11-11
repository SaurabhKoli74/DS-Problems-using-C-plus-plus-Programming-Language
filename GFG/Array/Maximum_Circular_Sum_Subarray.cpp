#include <iostream>
#include <vector>
using namespace std;
//Neive_Solution
//Time_Complexity = O(n^2)
/*
int max_Circular_sum_subarray(vector<int> arr)
{
    int res = arr[0];

    for (int i = 0; i < arr.size(); i++)
    {
        int currsum = arr[i];                // To compare it  with subarraysum;
        int subarraysum = arr[i];            //as loop is running from 1
        for (int j = 1; j < arr.size(); j++) // if loop starts with 0 then we can manitain only res no need of currsum but its good for better understanding
        {
            int index = (i + j) % (arr.size());

            subarraysum += arr[index];
            currsum = max(currsum, subarraysum);
        }
        res = max(res, currsum);
    }
    return res;
}
int main()
{
    vector<int> arr = {5, -2, 3, 4};
    cout << max_Circular_sum_subarray(arr);
    return 0;
}
*/

int normal_sum_subarray(vector<int> arr) //Kadane's Algorithm
{
    int res = arr[0];
    int maxending = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        maxending = max(arr[i], maxending + arr[i]);
        res = max(res, maxending);
    }
    return res;
}
int max_Circular_sum_subarray(vector<int> arr)
{
    int arr_sum = 0;
    int res = 0;
    int max_normal = normal_sum_subarray(arr);
    if (max_normal < 0)
    {
        return max_normal;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        arr_sum += arr[i];
        arr[i] = -arr[i]; //To invert array (to calculate minimum sum subarray of normal subarray)
    }

    int max_circular = arr_sum + normal_sum_subarray(arr); //We have made plus+ cauze we have inverted the array
    res = max(max_normal, max_circular);  //????Doubt Why cauze we have already calculated max_circular then
    //for what this condition is
    return res;
}
int main()
{
    vector<int> arr = {5, -2, -3, 4};
    cout << max_Circular_sum_subarray(arr);
    return 0;
}
