#include <iostream>
using namespace std;

int main()
{
    // your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a >= b && a <= c)
        {
            cout << "Take second dose now" << endl;
        }
        else if (a < b)
        {
            cout << "Too Early" << endl;
        }
        else
            cout << "Too Late" << endl;
    }
    return 0;
}
