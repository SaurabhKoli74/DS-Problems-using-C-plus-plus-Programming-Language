/*
ex . 10
0-->0000
1-->0001

2-->0010

3-->0011
4-->0100

5-->0101
6-->0110
7-->0111
8-->1000

9-->1001
10-->1010


We get one pattern after considering powers of 2
current power of 2 has-->2^n

n*(2^n/2) set bits + [(n-2^n+1) set bits to maintain pattern]
[3*(2^3/2) set bits + (10-2^3+1)]+SetBits(n-2^n)

//if number is not power of 2 then we have to call set_bit
function again ie  SetBits(n-2^n) 
so likewise we will broke the number into power of 2's
then add it recursively
*/

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // n: input to count the number of set bits
    // Function to return sum of count of set bits in the integers from 1 to n.
    int arr[256] = {0};
    int maxpowof2(int n)
    {
        int p = 0;
        while ((1 << p) <= n) // while((pow(2,p)<=n))
        {
            p++;
        }
        return --p;
    }
    int countSetBits(int n)
    {
        // Your logic here

        if (n == 0)
        {
            return 0;
        }
        int x = maxpowof2(n);
        int beforex = x * (pow(2, x) / 2); // x*(1<<(x-1))
        int afterx = n - pow(2, x) + 1;    // n-(1<<x)+1
        // +1 for 1st bit in 2^x and afterx for cal 1st bit ie to
        // continue with our pattern we have to cal. it

        int remain = n - pow(2, x); // for if its not 2's power ex 7 it will consider 2^2=4 so 7-4=3 we have to check for it again
        return (beforex + afterx + countSetBits(remain));
    }
};

// { Driver Code Starts.

// Driver code
int main()
{
    int t;
    cin >> t;   // input testcases
    while (t--) // while testcases exist
    {
        int n;
        cin >> n; // input n
        Solution ob;
        cout << ob.countSetBits(n) << endl; // print the answer
    }
    return 0;
}
// } Driver Code Ends