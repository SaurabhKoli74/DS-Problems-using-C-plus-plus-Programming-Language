#include <bits/stdc++.h>
// #include<iostream>
using namespace std;

//Unstable
//T.C = O(n)
//S.C = O(1)
int partition(int arr[], int l, int h)
{
    int i = l - 1;
    int p = h;
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < arr[p])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[p]);
    return i + 1;
}
int main()
{
    int arr[] = {15, 1, 9, 4, 6, 3, 6};
    int l = 0, h = 6;
    cout << partition(arr, l, h)<<endl;
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}