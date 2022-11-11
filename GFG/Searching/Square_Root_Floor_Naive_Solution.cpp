#include <iostream>
using namespace std;
//Time_Complexity = O(sqrt(n))

int square_root(int n)
{
    int i = 1;
    while (i * i <= n)
    {
        i++;
    }
    return (i - 1);
}
int main()
{
    int n;
    cin >> n;
    cout << square_root(n);
    return 0;
}