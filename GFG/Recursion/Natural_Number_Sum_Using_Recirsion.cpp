#include <iostream>
using namespace std;

int Natural_Number_Sum(int);
int main()
{
    int n;
    cin >> n;
    cout << Natural_Number_Sum(n);
    return 0;
}

int Natural_Number_Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + Natural_Number_Sum(n - 1);
}
