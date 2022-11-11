//Mejority_Element - Which appears more than n/2 times in array
#include <iostream>
using namespace std;
#include <vector>
//Neive_Solution
//Time_Complexity = O(n^2)

/*
int mejority_element(vector<int> arr)
{
    int count;

    for (int i = 0; i < arr.size(); i++)
    {
        count = 1;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > arr.size() / 2)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr = {1, 2, 2, 2, 2, 3};
    cout << mejority_element(arr);
    return 0;
}

*/
#include <iostream>
using namespace std;
#include <vector>
//moore voting algorithm
//Time_complexity = O(n)
int mejority_element(vector<int> arr)
{
    int count = 1, res = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[res])
        {
            count++;
        }
        else
            count--;
        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }
    count = 0;
    for (int i = 0; i < arr.size(); i++) // checking is must cauze algo does not gurentee if array has no mejority element
    {
        if (arr[res] == arr[i])
        {
            count++;
        }
    }

    if (count <= arr.size() / 2)
    {
        res = -1;
    }

    return res;
}
int main()
{
    vector<int> arr = {1, 2, 2, 2, 2, 3};
    cout << mejority_element(arr);
    return 0;
}
