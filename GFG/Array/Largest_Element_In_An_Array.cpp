#include <iostream>
#include <vector>
using namespace std;
int largest(vector<int> arr)
{
    int largest = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr.at(i) > arr.at(largest))
        {
            largest = i;
        }
    }
    return largest;
}

int main()
{
    vector<int> arr;
    for (int i = 0; i <= 5; i++)
    {
        arr.push_back(i);
    }

    cout<<largest(arr);
}