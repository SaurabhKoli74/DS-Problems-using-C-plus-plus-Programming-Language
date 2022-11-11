#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

//Time_Complexity = O(n)
//Auxilary_Space = O(1)
//Space_Complexity = O(1)

void left_rotate_by_one(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }

    arr[n - 1] = temp;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    left_rotate_by_one(arr, sizeof(arr) / sizeof(int));
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << arr[i] << " ";
    }
}