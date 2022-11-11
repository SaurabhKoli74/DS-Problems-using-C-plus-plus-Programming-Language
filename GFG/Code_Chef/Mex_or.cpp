#include <bits/stdc++.h>
using namespace std;

void mex(int x)
{
    bool flag = true;
    int c = 0;
    int num = x;
    if (num == 0)
    {
        cout << "1" << endl;
        return;
    }

    while (num != 0)
    {
        int loc = num % 2;
        if (loc == 0)
            flag = false;

        num /= 2;
        c++;
    }

    if (flag)
    {
        cout << x + 1 << endl;
    }
    else
    {
        int s = 0;
        c--;
        while (c--)
        {
            s += pow(2, c);
        }
        cout << s + 1 << endl;
    }
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
        int x;
        cin >> x;
        mex(x);
    }
    return 0;
}