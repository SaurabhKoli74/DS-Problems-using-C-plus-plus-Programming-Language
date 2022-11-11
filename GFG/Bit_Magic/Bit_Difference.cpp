// Initial Template for C++

//bits req to be flipped of a to get number b
//just xor a^b then we have the flipped bits
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b)
    {

        // Your logic here
        /*
        int Xor=a^b;
        int count=0;
        while(Xor)
        {
            Xor=Xor&(Xor-1);
            count++;
        }
        return count;
        */
        // Or----->

        int k = a ^ b;
        return __builtin_popcount(k); // built fun that gives num of set bits in num
    }
};

// { Driver Code Starts.

// Driver Code
int main()
{
    int t;
    cin >> t;   // input the testcases
    while (t--) // while testcases exist
    {
        int a, b;
        cin >> a >> b; // input a and b

        Solution ob;
        cout << ob.countBitsFlip(a, b) << endl;
    }
    return 0;
} // } Driver Code Ends