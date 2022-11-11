//Naive_Solution -
/*
Solution_is_to_merge_two_array_in_one_then_sort_it
then if n is even then average of two middle elements
if_odd_then_return_one_midian
T.C = O((n1+n2)*log(n1+n2))
*/

//O(n) solution is to use merge_method of merge sort
///we will do this in merge sort technique

//Best_Method
//T.C = O(log(n1))
//Approach is using Binary search
//We will take middle  index of n1 array
//then we will arrange index of n2 such that n1+n2 / 2 same no. of elements left of it and right of it
//for that n2 index can be calculated by formula -
// i2 = (n1+n2+1)/2 - i1
// +1 is to maintain extra element left of array if n1+n2 is odd
// note -- ----- n1<=n2 then only this algo works

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

double getMed(int a1[], int a2[], int n1, int n2)
{
    int begin1 = 0, end1 = n1;

    while (begin1 < end1)
    {
        int i1 = (begin1 + end1) / 2;
        int i2 = (n1 + n2 + 1) / 2 - i1; //formula

        int min1 = (i1 == n1) ? INT_MAX : a1[i1];
        int max1 = (i1 == 0) ? INT_MIN : a1[i1 - 1];

        int min2 = (i2 == n2) ? INT_MAX : a2[i2];
        int max2 = (i2 == 0) ? INT_MIN : a2[i2 - 1];

        if (max1 <= min2 && max2 <= min1)
        {
            if ((n1 + n2) % 2 == 0)
            {
                return ((double)max(max1, max2) + min(min1, min2)) / 2;
            }
            else
                return (double)max(max1, max2);
        }
        else if (max1 > min2)
        {
            end1 = i1 - 1;
        }
        else //max2>min1
            begin1 = i1 + 1;
    }

    return 1; //for ignoring control reaches end of non-void function
}
int main()
{
    int a1[] = {10, 20, 30, 40, 50}, n1 = 5, a2[] = {5, 15, 25, 35, 45}, n2 = 5;
    cout << getMed(a1, a2, n1, n2);
    return 0;
}