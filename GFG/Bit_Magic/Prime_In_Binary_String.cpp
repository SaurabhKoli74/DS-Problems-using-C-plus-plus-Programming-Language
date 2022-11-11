//'yes' if atleast one substring is prime in given string otherwise 'no'
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    s.pop_back(); // Exclude_last_character_and_check_whether_there_is_atleast_one_1
    if (count(s.begin(), s.end(), '1') > 0) //Standard_Template_Library_Fun_Returns_Count_Of_'1'
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}