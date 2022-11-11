#include <iostream>
using namespace std;
//Time_Complexity = O(logn)
//Method 1 - Recurssive_Method
//Auxilary_Space_Complexity = O(logn)
//Space_Complexity = O(logn)
/* 
int power(int a, int b)
{
    int res;
    if (b == 0)
    {
        return 1;
    }
    int tm = power(a, b / 2);
    res = tm * tm;
    if (b % 2 == 0)
    {
        return res;
    }
    else
    {
        return res * a;
    }
}
int main()
{
    int a = 3, b = 5;
    cout << power(a, b);
    return 0;
} */

#include <iostream>
using namespace std;
//Time_Complexity = O(logn)
//Auxilary_Space_Complexity = thata(1) ....Diff from above reccursive Method
long long int power(int a, int b)
{
    long long int res = 1;
    int x = a;
    while (b > 0)
    {
        if (b % 2 != 0) // if( b & 1 ) // To_Know_Odd_Number
        {
            res *= x;
        }
        x = x * x;
        b = b / 2;
        //  _____OR______
        // b = b >> 1; // right_shift_operator_it_devides_by_2^1
    }
    return res;
}
int main()
{
    int a = 2, b = 2;
    cout << power(a, b);
    return 0;
}