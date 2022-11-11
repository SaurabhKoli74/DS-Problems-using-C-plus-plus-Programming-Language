#include <iostream>
#include <vector>
using namespace std;
//Time_Complexity = O(n^2)
//Method - 1
/*
int Traping_Rain_Water(vector<int> arr)
{
    int lmax, rmax, res = 0;

    for (int i = 1; i < arr.size() - 1; i++)
    {
        lmax = arr[i];              // if there is no lmax greater than  current element then lmax is current element
        for (int j = 0; j < i; j++) // Keep track of leftmost lmax
        {
            lmax = max(lmax, arr[j]);
        }
        rmax = arr[i];
        for (int j = arr.size() - 1; j > i; j--) //keep track of rightmost rmax
        {
            rmax = max(rmax, arr[j]);
        }
        res += min(rmax, lmax) - arr[i];
    }

    return res;
}

int main()
{
    vector<int> arr = {12, 3, 5, 6, 5}; // O/P = 4
    cout << Traping_Rain_Water(arr);
}

*/

#include <iostream>
#include <vector>
using namespace std;
// Method 2
//Time_Complexity = O(n)
//But Auxilary Space = Theta(n)
int Traping_Rain_Water(vector<int> arr)
{
    int lmax[arr.size()], rmax[arr.size()], res = 0;
    lmax[0] = arr[0];
    rmax[arr.size() - 1] = arr[arr.size() - 1];
    for (int i = 1; i < arr.size(); i++) //O(n)
    {
        lmax[i] = max(lmax[i - 1], arr[i]);
    }
    for (int i = arr.size() - 2; i >= 0; i--) //O(n)
    {
        rmax[i] = max(rmax[i +1], arr[i]);
    }

    for (int i = 1; i < arr.size() - 1; i++) //O(n)
    {
        res += min(lmax[i], rmax[i]) - arr[i];
    }
    return res;
}


int main()
{
    vector<int> arr = {12, 3, 5, 6, 5}; // O/P = 4
    cout << Traping_Rain_Water(arr);
}