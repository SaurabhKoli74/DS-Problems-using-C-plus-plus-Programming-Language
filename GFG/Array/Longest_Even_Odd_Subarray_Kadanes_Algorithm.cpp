#include <iostream>
using namespace std;
#include <vector>

//Neive_Solution
//Time_complexity = O(n^2)
// Method 1
/*
int longest_even_odd_subarray(vector<int> arr)
{
    int count = 1;
    int res=0;
    for (int i = 0; i < arr.size(); i++)
    {
        count = 1;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] % 2 == 0 && arr[j - 1] % 2 != 0 || arr[j] % 2 != 0 && arr[j - 1] % 2 == 0)
            {
                count++;
                
            }
            else
                break;
        }
        res = max(res, count);
    }
    return res;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 2};
    cout << longest_even_odd_subarray(arr);
    return 0;
}

*/

#include <iostream>
using namespace std;
#include <vector>
//******Kadane's Algorithm******* logic almost same as finding consecutive 1's in binary number

//Time_Complexity = O(n)
int longest_even_odd_subarray(vector<int> arr)
{
    int res = 0;
    int count = 1;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] % 2 == 0 && arr[i - 1] % 2 != 0 || arr[i] % 2 != 0 && arr[i - 1] % 2 == 0)
        {
            count++;
            res = max(count, res);
        }
        else
            count = 1;
    }
    return res;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 4};
    cout << longest_even_odd_subarray(arr);
    return 0;
}
