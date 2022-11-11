//For_Unsorted_Hashing_is_also_good_but_we_can_user_two_pair_method_so_to_avoid_hashing_computations_&_all
//For_unsorted_pair_sum_hashing_is_good (O(n))
//For_sorted_array_always_prefer_2_pointer_approach
//For_unsorted_sorted_array_prefer_2_pointer_approach
#include <bits/stdc++.h>
using namespace std;
/*
//Naive_Solution_T.C = O(n^3)
//Efficient_Solution_T.C = O(n^2)
//Efficient_Solution_method-1
bool pairsum(int arr[], int x, int start, int end)
{
    int flag = 1;
    while (start < end)
    {
        if (arr[start] + arr[end] == x)
        {
            return true;
        }
        else if (arr[start] + arr[end] > x)
        {
            end--;
        }
        else
            start++;
    }
    return false;
}
bool triplet(int arr[], int x, int n)
{
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        if (pairsum(arr, x - arr[i], i + 1, n - 1))
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int arr[] = {3, 2, 4, 1, 5};
    int x = 20;
    int n = (sizeof(arr) / sizeof(int));
    cout << triplet(arr, x, n);
    return 0;
}

*/


//Efficient_Solution_method-2


// C++ program to find a triplet 
#include <bits/stdc++.h> 
using namespace std; 

// returns true if there is triplet with sum equal 
// to 'sum' present in A[]. Also, prints the triplet 
bool find3Numbers(int A[], int arr_size, int sum) 
{ 
	int l, r; 

	/* Sort the elements */
	sort(A, A + arr_size); 

	/* Now fix the first element one by one and find the 
	other two elements */
	for (int i = 0; i < arr_size - 2; i++) { 

		// To find the other two elements, start two index 
		// variables from two corners of the array and move 
		// them toward each other 
		l = i + 1; // index of the first element in the 
		// remaining elements 

		r = arr_size - 1; // index of the last element 
		while (l < r) { 
			if (A[i] + A[l] + A[r] == sum) { 
				printf("Triplet is %d, %d, %d", A[i], 
					A[l], A[r]); 
				return true; 
			} 
			else if (A[i] + A[l] + A[r] < sum) 
				l++; 
			else // A[i] + A[l] + A[r] > sum 
				r--; 
		} 
	} 

	// If we reach here, then no triplet was found 
	return false; 
} 

/* Driver program to test above function */
int main() 
{ 
	int A[] = { 1, 4, 45, 6, 10, 8 }; 
	int sum = 22; 
	int arr_size = sizeof(A) / sizeof(A[0]); 

	find3Numbers(A, arr_size, sum); 

	return 0; 
} 
