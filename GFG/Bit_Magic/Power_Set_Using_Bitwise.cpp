#include <iostream>
#include <string>
#include <cmath>

//Logic - power_set contain 2^n-1 (start from zero so) elements
//        take binary combination of numbers and print corresponding bit character to their bits
//        so take 0- 2^n-1 numbers checks its setbits and print accordingly

//Drawback -- > Not_in_lexicographic_Order
//T.C -- > O(2^n*n)---> n= length_of_string
using namespace std;
void power_set(string);

int main()
{
    string s;
    cin >> s;
    power_set(s);
    return 0;
}

void power_set(string s)
{
    int n = s.length();
    int powsize = pow(2, n);

    for (int counter = 0; counter < powsize; counter++)
    {
        for (int i = 0; i < n; i++)
        {
            // if ((counter & (1 << i)) != 0) 
            // {
            //     cout << s[i];
            // }
            if((1 & (counter>>i))==1)
            {
                cout<<s[i];
            }
        }
        cout << endl;
    }
}
