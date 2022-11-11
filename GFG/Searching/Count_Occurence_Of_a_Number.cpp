#include <iostream>
using namespace std;
//here I have not used direct binary logic as used in lastocc and firstocc cauz it will take (logn+k)
//k for same elements left and right of it
//instead
//1.call first_occ and locc
//2.ans = locc-first_occ+1
int firstOcc(int arr[], int n, int x)
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
            if (mid == 0 || arr[mid - 1] != arr[mid])
                return mid;

            else
                high = mid - 1;
        }
    }

    return -1;
}
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

int count_occurence(int arr[], int n, int x)
{
    int focc = firstOcc(arr, n, x); //logn
    if (focc == -1)
    {
        return 0; //                   +
    }
    int locc = lastOcc(arr, n, x); //logn
    return (locc - focc + 1);      //= logn
}
int main()
{
    int arr[] = {5, 10, 10, 10, 10}, n = 5;

    int x = 10;

    cout << count_occurence(arr, n, x);
}