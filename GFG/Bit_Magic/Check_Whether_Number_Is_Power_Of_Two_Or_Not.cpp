#include <iostream>
using namespace std;
//Method 1 : Neive_Solution
//T.C : Theta(No.Of Bits in Number)

/*
bool power_of_two(int);
int main()
{
    int n;
    cin >> n;
    cout << power_of_two(n);
    return 0;
}

bool power_of_two(int n)
{
    if (n == 0)
        return false;

    while (n != 1)  // it traverce almost all the bits so tc = theta(no.of.bits)
    {
        if (n % 2 != 0)
        {
            return false;
        }

        n /= 2;
    }

    return true;
}
*/

#include <iostream>
using namespace std;
// Method 2 : By using Brian & karningham Algorithm
//cauze power of two number contain only one set bit
//T.C : Theta(1) By Precomputation

/*

int table[256];
void initialize_table()
{
    table[0] = 0;
    for (int i = 0; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2]; // last bit + previously computed number set bits
    }
}

int set_bits(int n)
{
    //int count = 0;
    return table[n & 0xff] + table[n >> 8 & 0xff] + table[n >> 16 & 0xff] + table[n >> 24];
}
int main()
{
    int n;
    cin >> n;
    initialize_table();
  
    if (set_bits(n) == 1)
    {
        cout << true;
    }
    else
        cout << false;

    return 0;
}

*/

#include <iostream>
using namespace std;
//Method - 3
//T.C - Theta(1)
//One_Line_Expression

bool power_of_two(int);
int main()
{
    int n;
    cin >> n;
    //cout << power_of_two(n);
   
   
    // NOTE:::::
    // cout << power_of_two(n) ? "true" : "false"; //ternary operator not work in c++ Directly

    string result = power_of_two(n) ? "true" : "false"; 

    cout<<result;
    return 0;
}

bool power_of_two(int n)
{
    return ((n!=0)&&((n & (n - 1)) == 0));
}