#include <iostream>
using namespace std;
#include <string>
//Time_Complexity = O(2^n)
void GenerateSub(string, string, int);
int main()
{
    string s;
    cin >> s;
    GenerateSub(s, " ", 0);
    return 0;
}
void GenerateSub(string s, string cur, int n)
{
    if (n == s.length())
    {
        cout << cur << " ";
        return;
    }
    GenerateSub(s, cur, n + 1);
    GenerateSub(s, cur + s[n], n + 1);
}
