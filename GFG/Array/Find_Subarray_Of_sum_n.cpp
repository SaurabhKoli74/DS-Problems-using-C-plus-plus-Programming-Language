//Find subarray of sum n if present then return "from index to  index"we have to print
//By_Sliding_Window_Method
//Just keepon adding until cursum>sum then start subtracting from 1st element if it becomes less now just check
//whether its equal if not then add next element
#include <iostream>
using namespace std;
#include <vector>
void sum(vector<int>, int);
int main()
{
    vector<int> arr;
    int Sum;
    cin >> Sum;
    int size = 5;
    for (int i = 1; i <= size; i++) // 1,2,3,4,5
    {
        arr[i]=i; // Why this not works ????????????????????????????????????????????????????????????????????????????
        //arr.push_back(i);
    }
    sum(arr, Sum);
    return 0;
}
/* Returns true if the there is a subarray of arr[] with a sum equal to 'sum' 
otherwise returns false. Also, prints the result */
void sum(vector<int> arr, int Sum)
{
    /* Initialize curr_sum as value of first element 
	and starting point as 0 */
    int size = arr.size();
    int start = 0;
    int cursum = arr[0];

    /* Add elements one by one to curr_sum and if the curr_sum exceeds the 
	sum, then remove starting element */

    for (int i = 1; i <= size; i++) // loop goes one iteration additionally to check for preveous element
    {
        	// If curr_sum exceeds the sum, then remove the starting elements 
        while (cursum > Sum && start < i - 1)
        {
            cursum = cursum - arr[start];
            start++;
        }
        	// If curr_sum becomes equal to sum, then return true 
        if (cursum == Sum)
        {
            cout << "Subarray_Found_From_Index_" << start << "_to_Index_" << i - 1;
            return;
        }
        // Add this element to curr_sum
        if (i < size)
            cursum += arr[i];
    }

    cout << "Not_Found";
}