#include <bits/stdc++.h>

using namespace std;

//condition_to_be_invers
//1.i<j
//2.arr[i]>arr[j]
//We have cal total inversions in an array
//We can do this using merge_sort logic
//logic is almost same as merge sort , actually hera we are also sorting the array parallely to get the inverse logic correct

//possible inversions
//1.(x,y) both are present left
//2.(x,y) both are present right
//3.(x,y) x is present at left and y is present at right
//in first countInv recursive call 1 is calculated
//in second countInv recursive call 2 is calculated
//in countAndMerge call 3 ie. x from left of mid and y from right of mid is calculated
//so no elements will be repeated


//T.C : O(nlogn)
int countAndMerge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    int i = 0, j = 0;
    int left[n1];
    int right[n2];
    for (i = 0; i < n1; i++)
    {
        left[i] = arr[l+i];
    }

    for (j = 0; j < n1; j++)
    {
        right[j] = arr[m + 1 + j];
    }

    i = 0, j = 0;
    int k = l;
    int res = 0;
    while (i < n1 && j < n2)
    {
        if (left[i] <= right[j])
        {
            arr[k++] = left[i++];
        }
        else
        {
            arr[k++] = right[j++];
            res += (n1 - i); // after n1-i all elements will be greater that is they forms inversion
            //we are cal. at once
            //suppose there are 100 elements after that then we are cal. at once
        }
    }

    while (i < n1)
    {
        arr[k++] = left[i++];
    }
    while (j < n2)
    {
        arr[k++] = right[j++];
    }

    return res;
}

int countInv(int arr[], int l, int r)
{
    int res = 0;
    if (r > l)
    {
        int m = l + (r - l) / 2; //to avoid overflow
        res += countInv(arr, l, m);
        res += countInv(arr, m + 1, r);
        res += countAndMerge(arr, l, m, r);
    }
    return res;
}
int main()
{
    int arr[] = {2, 4, 1, 3, 5};
    int size=sizeof(arr)/sizeof(int);
    cout << countInv(arr, 0, size-1);
}