#include <iostream>
using namespace std;
#include <vector>
//Neive_Solution
//Time_Complexity = O(n^2)

int maximum_subarray_sum(vector<int> arr)
{
    int res = arr[0]; // it is necessary cauz otherwise if value is less than this will give wrong result
    int cur;
    for (int i = 0; i < arr.size(); i++)
    {
        cur = 0;
        for (int j = i; j < arr.size(); j++)
        {
            cur += arr[j];
            res = max(cur, res);
        }
    }
    return res;
}
int main()
{
    vector<int> arr = {-5, -2, 10, -4};
    cout << maximum_subarray_sum(arr);
    return 0;
}


/*


#include <iostream>
using namespace std;
#include <vector>
//Kadane's Algorithm
//Better_Time_Complexity ie. O(n)
//Logic - Maximum ending subarray_sum with that number

int maximum_subarray_sum(vector<int> arr)
{
    // vector<int> arr1(arr.size());
    // arr1[0] = arr[0];
    int maxending = arr[0];
    int res = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        maxending = max(arr[i] + maxending, arr[i]);
        //arr1[i] = maxi;
        res = max(res, maxending);
    }

    //  OR---> Auxilary Space increases so i have maintained two var ie. res & maxi

    // int max = arr1[0];

    // for (int i = 1; i < arr1.size(); i++)
    // {
    //     if (arr1[i] > max)
    //     {
    //         max = arr1[i];
    //     }
    // }

    return res;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    cout << maximum_subarray_sum(arr);
}
*/
