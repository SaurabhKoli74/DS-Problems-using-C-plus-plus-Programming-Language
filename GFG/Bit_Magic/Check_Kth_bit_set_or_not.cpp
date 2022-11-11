#include <iostream>
using namespace std;

int main()
{
    int k, n;
    cin >> n >> k; // Extraction operator

    // Method 1 -->Right_Shift_Operator

    /*
    n=n>>(k-1);

    if (n & 1)
    {
        cout << "Yes";
    }
    else
        cout << "No";

    */

    // Method 2 -->Left_Shift_Operator
    // Logic --> shift 1's bit by k-1 so if 1&1 then true otherwise 1 & 0 false

    int c = 2;
    // c<<1; //valid but not initialization happens
    // cout<<c<<endl;
    if (n & 1 << (k - 1))
    {
        cout << "Yes";
    }
    else
        cout << "No";

    return 0;
}