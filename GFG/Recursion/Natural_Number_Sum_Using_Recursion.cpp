#include <iostream>
using namespace std;

int SumN(int, int = 0);
int main()
{
    int n;
    cin >> n;
    cout << SumN(n);
}

int SumN(int n, int k)
{
    if (n == 0)
    {
        return k;
    }
    return n + SumN(n - 1); //Non-Tail Recursive
    return SumN(n - 1, k + n);
}