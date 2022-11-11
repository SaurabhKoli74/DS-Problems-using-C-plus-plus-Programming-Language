// Initial Template for C++

// Only_Perfect_Square_Of_Prime_Numbers_can_contain_3_Divisors
// By_this_Solve_Problem
//Using Sieve_Algorithm

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    int exactly3Divisors(int N)
    {
        // Your code here
        if (N <= 1)
        {
            return 0;
        }

        vector<bool> arr(sqrt(N) + 1, true);

        int count = 0;
        for (int i = 2; i <= sqrt(N); i++)
        {
            if (arr[i])
            {
                count++;
                for (int j = 2 * i; j <= sqrt(N); j += i)
                {
                    arr[j] = false;
                }
            }
        }

        return count;
    }
};

// { Driver Code Starts.

int main()
{
    int T;

    // taking testcases
    cin >> T;
    while (T--)
    {
        int N;

        // taking N
        cin >> N;
        Solution ob;
        // calling function exactly3Divisors()
        cout << ob.exactly3Divisors(N) << endl;
    }
    return 0;
} // } Driver Code Ends