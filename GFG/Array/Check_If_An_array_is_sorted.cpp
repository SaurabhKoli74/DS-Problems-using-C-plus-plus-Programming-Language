#include <iostream>
#include <vector>
using namespace std;
//Time_Complexity = Theta(n)
int issort(vector<int> arr)
{
    int flag = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr.at(i - 1) > arr.at(i))
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        return -1;
    }
    else
        return 1;
}
int main()
{
    vector<int> arr = {1, 2, 5, 4, 5}; 
    cout << issort(arr);
    return 0;
}