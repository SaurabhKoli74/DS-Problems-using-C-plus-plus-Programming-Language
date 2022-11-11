#include <iostream>
using namespace std;

void printnto1(int);
int main()
{
    int n;
    cin >> n;
    printnto1(n);
}

void printnto1(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << " ";
    printnto1(n - 1);
}