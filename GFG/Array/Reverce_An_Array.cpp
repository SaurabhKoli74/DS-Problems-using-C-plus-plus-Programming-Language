#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
void reverce(int arr[], int n)
{
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);
    reverce(arr, n);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}