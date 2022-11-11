#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
// Time_Complexity = Theta(n)
void Frequency_in_Sorted_Array(vector<int> arr)
{
    // if we use if/else then it will also work for repeated items.
    int count = 1;
    int i;
    for ( i = 1; i < arr.size();)
    {

        if (arr[i - 1] == arr[i])
        {
            count++;
        }
        else
        {
            cout << arr[i - 1] << " " << count << endl;
            count = 1;
        }
        i++;
    }
    // Either "last element==n-2th" element or "last element!=n-2th"  the bellow statement will execute atleast once
    // also this statement is applicable when size is only one
    cout << arr[i - 1] << " " << count << endl;
}

int main()
{
    vector<int> arr = {1, 1, 4, 4, 5, 5, 5, 6, 7};
    Frequency_in_Sorted_Array(arr);
}












/*

//using two loops ie while loop inside for loop it just implicitally ie in while itself handles one case -->last elements is same as n-2th element except logic is same as above

Time_Complexity : Theta(n)
Space_Complexity: Theta(1)
void Frequency_in_Sorted_Array(vector<int> arr)
{
    // if we use if/else then it will also work for repeated items.
    int count = 1;
    for (int i = 1; i < arr.size();)
    {

        while (arr[i - 1] == arr[i] && i < arr.size())
        {
            count++;
            i++;
        }
        cout << arr[i - 1] << " " << count << endl;
        count = 1;
        i++;
    }
    if (arr.size() == 1 || (arr.at(arr.size() - 1) != arr.at(arr.size() - 2))) // if only 1 element present
                                                                               // if last element is diff from n-2th element
                                                                               // we have to print its frequency
    {
        cout << arr[arr.size() - 1] << " " << count << endl;
    }
}
int main()
{
    vector<int> arr = {1, 1, 4, 4, 5, 5, 5, 6, 7};
    Frequency_in_Sorted_Array(arr);
}


*/