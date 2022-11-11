#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s1;
    string s2;
    s1="Saurabh";
    s2="Saurabh";
    if (s1==s2)
    {
        cout<<"Match_Found";
    }
    
    string s3=s1+s2;
    cout<<s3;
    return 0;
}