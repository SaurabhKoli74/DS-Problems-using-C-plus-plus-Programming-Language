#include <iostream>
using namespace std;
#include <vector>

int max_ones(vector<int> arr)
{
    int res = 1;
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            count = 0;
        }
        else
        {
            count++;
            res = max(res, count);
        }
    }
    return res;
}
int main()
{
    vector<int> arr = {1, 0, 0, 1, 1, 1, 1, 1, 1};
    cout << max_ones(arr);
    return 0;
}