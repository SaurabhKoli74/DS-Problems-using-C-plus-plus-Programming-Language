#include <iostream>
using namespace std;
#include <vector>
int sum(vector<int>, int);
//Method - 1
//Neive_Solution
//T.C = O(n^2)

/*
int main()
{
    vector<int> arr;
    int k;
    cin >> k;
    int size = 5;
    for (int i = 1; i <= size; i++) // 1,2,3,4,5
    {
        // arr[i]=i; // Why this not works ????????????????????????????????????????????????????????????????????????????
        arr.push_back(i);
    }
    cout << sum(arr, k);
    return 0;
}
int sum(vector<int> arr, int k)
{
    int sum = 0, maxsum = 0, size = arr.size();

    for (int i = 0; i + k - 1 < size; i++)
    {
        sum = 0;
        for (int j = 0; j < k; j++) //or//  for(int j=i; j<i+k ; j++)
        {
            sum += arr.at(i + j);
        }
        maxsum = max(sum, maxsum);
    }
    return maxsum;
}

*/

#include <iostream>
using namespace std;
#include <vector>
int sum(vector<int>, int);
//Method - 2
//Efficient Solution
//T.C = O(n)
/*
int main()
{
    vector<int> arr;
    int k;
    cin >> k;
    int size = 5;
    for (int i = 1; i <= size; i++) // 1,2,3,4,5
    {
        // arr[i]=i; // Why this not works ????????????????????????????????????????????????????????????????????????????
        arr.push_back(i);
    }
    cout << sum(arr, k);
    return 0;
}
int sum(vector<int> arr, int k)
{
    int maxsum = 0, arraysum = 0;
    int size = arr.size();
    for (int i = 0; i < k; i++)
    {
        arraysum += arr[i];
    }
    maxsum = arraysum;
    for (int i = k; i < size; i++)
    {
        arraysum += (arr[i] - arr[i - k]);
        maxsum = max(arraysum, maxsum);
    }
    return maxsum;
}
*/

