#include <iostream>
using namespace std;
//T.C = O(logn)
//A.S.C = O(1)
//Efficient_than_Recursive
int lastOcc(int arr[], int n, int x)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (x > arr[mid])
            low = mid + 1;

        else if (x < arr[mid])
            high = mid - 1;

        else
        {
            if (mid == n - 1 || arr[mid + 1] != arr[mid])
                return mid;

            else
                low = mid + 1;
        }
    }

    return -1;
}

int main()
{

    int arr[] = {5, 6, 10, 10, 10}, n = 5;

    int x = 10;

    cout << lastOcc(arr, n, x);
    return 0;
}