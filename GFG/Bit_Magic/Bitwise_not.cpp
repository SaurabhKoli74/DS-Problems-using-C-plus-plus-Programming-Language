// Bitwise Not
#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    cout << (~a); // Representation of 2's complement
                  // Its compiler dependent
    // OP --> -2
    // 2's Complement Formula --> 2^n-1- x

    int b = -3;
    int c = b << 1; // Right Shift and left shift not to use in negative numbers -->behaviour may undefined
    cout << endl
         << c;
    c = b >> 1;
    cout << endl
         << c;

    return 0;
}