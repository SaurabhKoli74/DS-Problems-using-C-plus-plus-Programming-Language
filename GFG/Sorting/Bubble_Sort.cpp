#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

//T.C = O(n^2)
//
void bubble_sort(vector<int>&,int);
int main()
{
    vector<int>arr = {3, 1, 4, 2, 5, 7, 6};
    int n=7;
    bubble_sort(arr,n);

    for (int i : arr)
    {
        cout << i << " ";
    }
}

void bubble_sort(vector<int>&arr,int n)
{
    int flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = false;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = true;
                // int temp = arr[j];
                // arr[j] = arr[j + 1];
                // arr[j + 1] = temp;
                swap(arr[j],arr[j+1]);  
            }
        }

        if (flag == false)
        {
            break;
        }
    }
}
