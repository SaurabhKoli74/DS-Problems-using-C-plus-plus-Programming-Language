#include <iostream>
using namespace std;
#include <vector>

int secondLargest(vector<int> arr)
{
    int sl = -1;
    int l = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr.at(i) > arr.at(l))
        {
            sl = l;
            l = i;
        }
        else if (arr.at(i) != arr.at(l))
        {
            if (sl == -1 || arr.at(sl) < arr.at(i))
            {
                sl = i;
            }
        }
    }
    return sl;
}


int main()
{
    vector<int>arr = {2,5,56};
    cout<<secondLargest(arr);
    return 0;
}