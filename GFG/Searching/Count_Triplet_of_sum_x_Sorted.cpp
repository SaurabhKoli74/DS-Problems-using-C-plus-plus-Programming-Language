
// C++ program to count number of triplets having sum x
#include <bits/stdc++.h>
using namespace std;

// returns true if there is triplet with sum equal
// to 'sum' present in A[]. Also, prints the triplet
bool find3Numbers(int A[], int arr_size, int sum)
{
    int l, r;
    int flag = 1;
    /* Sort the elements */
    sort(A, A + arr_size);

    /* Now fix the first element one by one and find the 
	other two elements */
    int count = 0;
    for (int i = 0; i < arr_size - 2; i++)
    {

        // To find the other two elements, start two index
        // variables from two corners of the array and move
        // them toward each other
        l = i + 1; // index of the first element in the
        // remaining elements

        r = arr_size - 1; // index of the last element
        while (l < r)
        {
            if (A[i] + A[l] + A[r] == sum)
            {
                printf("Triplet is %d, %d, %d\n", A[i],
                       A[l], A[r]);
                count++;
                flag = 0;
                l++;
                r--;
            }
            else if (A[i] + A[l] + A[r] < sum)
                l++;
            else // A[i] + A[l] + A[r] > sum
                r--;
        }
    }

    // If we reach here, then no triplet was found
    if (flag)
        return false;
    else
    {
        cout << "Count = " << count;
        return true;
    }
}

/* Driver program to test above function */
int main()
{
    int A[] = {1,2,3,4,5,6};
    int sum = 8;
    int arr_size = sizeof(A) / sizeof(A[0]);

    find3Numbers(A, arr_size, sum);

    return 0;
}
