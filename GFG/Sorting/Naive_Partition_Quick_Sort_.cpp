// #include<bits/stdc++.h>
using namespace std;
#include <iostream>

// T.C = Theta(n)
// A.S.C = Theta(n)
int partition(int arr[], int l, int h, int p)
{

    int temp[h - l + 1]; // making the auxilary array
    int index = 0;
    for (int i = l; i <= h; i++)
    {
        if (arr[i] < arr[p]) // (arr[i] <= arr[p] && p!=i) //Here by this it will become unstable <--exp. is given in GFG sol-->
        {
            temp[index++] = arr[i];
        }
    }

    for (int i = l; i <= h; i++) // to maintain statibility by making two loops
    {
        if (arr[i] == arr[p])
        {
            temp[index++] = arr[i];
        }
    }
    // making two loops cauze to maintain stability
    int res = l + index - 1; // the pivot element index

    for (int i = l; i <= h; i++)
    {
        if (arr[i] > arr[p]) // now copy greater than p elements
        {
            temp[index++] = arr[i];
        }
    }

    for (int i = l; i <= h; i++) // copy to the original array
    {
        arr[i] = temp[i - l];
      
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false); // Turn of synchronisation between c++ & c standard streams

    cin.tie(NULL); // turn of synchronisation bet cin and cout
    // make code faster

    int arr[] = {6, 10, 7, 6, 4, 1};
    int low = 0, high = 5;
    int p = 0;
 

    
    cout<<"PIVOT_INDEX : "<<partition(arr, low, high, p)<<endl;

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}