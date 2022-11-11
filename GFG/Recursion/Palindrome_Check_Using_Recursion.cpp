#include <iostream>
using namespace std;
/*
1.----------Palindrome_Number----------
T.C = O(no. of Digits)
Space_Complexity = O(Digits) // or Theta(1) by tail recursion
bool palindrome_check(int, int, int=0);

int main()
{
    int n;
    cin >> n;
    int k = n;
    cout << palindrome_check(n, k);
    return 0;
}

bool palindrome_check(int n, int k, int m )
{
    if (n == 0)
    {
        return k == m;
    }

    return palindrome_check(n / 10, k, m * 10 + n % 10);
}

*/

#include <iostream>
using namespace std;
#include <string>
//---------Palindrome_String--------

bool Palindrome(string, int, int);
int main()
{
    string s;
    cin >> s;
    cout << Palindrome(s, 0, s.length() - 1);
    return 0;
}
bool Palindrome(string s, int start, int end)
{
    if (start >= end)
    {
        return true;
    }

    /*
    if (s[start] == s[end])
    {
        return Palindrome(s, start + 1, end - 1);
    }
    else
    {
        return false;
    }
    */
    // ---OR------>
    return ((s[start] == s[end]) && Palindrome(s, start + 1, end - 1));
}