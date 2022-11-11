#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
//Time_Complexity = O(n^2)
//Auxilary_Space = Theta(1)
/*
void leaders(vector<int> arr)
{
    int flag = 1;
    
    for (int i = 0; i < arr.size(); i++)
    {
        flag = 1;
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] >= arr[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << arr[i] << " ";
            
        }
     
    }
}
int main()
{
    vector<int> arr = {5,4,5,3,2,1};

    leaders(arr);
}
*/

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

//Method 2
//Better TC
//Time_Complexity = O(n)
//Auxilary_Space_Complexity = Theta(1)
//Drawback is it prints in reverce order

/*
void leaders(vector<int> arr)
{
    int cur = arr[arr.size() - 1];
    cout << cur << " ";
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr.at(i) > cur)
        {
            cur = arr.at(i);
            cout << arr.at(i) << " ";
        }
    }
}
int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};

    leaders(arr);
    return 0;
}
*/

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

//Method same as method 2 but in same order ..Auxilary space increases
//Better TC
//Time_Complexity = O(n)
//Auxilary_Space_Complexity = O(n)
//Drawback is it prints in reverce order

void leaders(vector<int> arr)
{
    int cur = arr[arr.size() - 1];

    int arr1[arr.size()];
    int res = 0;
    arr1[res] = arr[arr.size() - 1];
    res = 1;
    for (int i = arr.size() - 2; i >= 0; i--)
    {
        if (arr.at(i) > cur)
        {
            cur = arr.at(i);
            arr1[res++] = cur;
        }
    }

    for (int i = res - 1; i >= 0; i--)
    {
        cout << arr1[i] << " ";
    }
}
int main()
{
    vector<int> arr = {5, 4, 3, 2, 1};

    leaders(arr);
    return 0;
}