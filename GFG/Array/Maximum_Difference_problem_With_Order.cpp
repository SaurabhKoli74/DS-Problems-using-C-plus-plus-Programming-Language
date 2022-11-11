#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
//Neive_Solution = O(n^2)
//Auxilary_Space = Theta(1)

/*
int max_diff_with_order(vector<int> arr)
{
    int max = arr.at(1) - arr.at(0);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] - arr[i] > max)
            {
                max = arr[j] - arr[i];
            }
        }
    }
    return max;
}
int main()
{
    vector<int> arr = {1, 2, 7, 4, 5};
    cout << max_diff_with_order(arr);
    return 0;
}

*/

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include<algorithm>
using namespace std;
//Efficient_Sollution
//Time_Complexity = O(n)
//Auxilary_Space_Complexity = Theta(1)
int max_diff_with_order(vector<int> arr)
{
    
    int minimum=arr[0];
    int res=arr[1]-arr[0];
    
    for (int i = 1; i < arr.size(); i++)
    {
        res = max(res,arr[i]-minimum);
        minimum = min(minimum,arr[i]);
    }
    return res;
}
int main()
{
    vector<int> arr = {1, 2, 7, 78, 5};
    cout << max_diff_with_order(arr);
    return 0;
}