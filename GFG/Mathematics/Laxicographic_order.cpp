//if A is prefix of B then B should come first

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool mycompare(string s1, string s2)
{
    if (s1.compare(0, s2.size(), s2) == 0 || s2.compare(0, s1.size(), s1) == 0)
    {
        return s1>s2;
    }
    else
        return s1 < s2;
}
int main()
{
    vector<string> arr = {"Orange", "Green", "GreenYellow"};
    sort(arr.begin(), arr.end(), mycompare);
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
}