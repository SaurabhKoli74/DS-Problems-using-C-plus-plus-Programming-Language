//We have given one array
//in that all elements are different except 1 elements
//We have to return that one element
//array is Unsorted
//array must contain 0
//1.Array_size , n>=2
//2.Only one Element Repeats (Any number of times)
//3.All the Elements from 0 to max(arr) are present
//Conclusion
//0<=max(arr)<=n-2 //cauze one elements has to be repeat
//with no midification in array

//We can do it by three methods
//1.Super_Naive_solution ---O(n^2)
//2.Naive_Solution --- O(nlogn) not written its easy as we have to sort then cal
//3.T.C = O(n) , A.S = O(n-1) using boolean array
//4. T.C = O(n) , A.S = O(1)

//4.Solution ---->
//T.C = O(n)
//A.S = O(1)

#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
#include <climits>
#include <deque>
using namespace std;

int repeat(int arr[], int n)
{
    int slow = arr[0], fast = arr[0];

    do
    {
        slow = arr[slow];
        fast = arr[arr[fast]];

    } while (slow != fast);

    slow = arr[0];

    while (slow != fast)
    {
        slow = arr[slow];
        fast = arr[fast];
    }
    return slow;
}

int main()
{

    int arr[] = {1, 3, 2, 4, 6, 5, 7, 3}, n = 8;

    cout << repeat(arr, n);

    return 0;
}