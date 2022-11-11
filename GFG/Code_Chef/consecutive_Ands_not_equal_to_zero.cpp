#include <bits/stdc++.h>
using namespace std;

int sb(int N)
{
    int sol = 0;
    while (N > 0)
    {
        sol++;
        N = N >> 1;
    }
    return sol;
}
int main()
{
    // added the two lines below
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int num;
        cin >> num;
        int N = sb(num);
        int max1 = num - pow(2, N - 1) + 1;
        int max2 = pow(2, N - 1) - pow(2, N - 2);
        cout << max(max1, max2) << endl;
    }
    return 0;
}