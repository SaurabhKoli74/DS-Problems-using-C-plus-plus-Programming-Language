#include<iostream>
using namespace std;


int digitsum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return ((n%10)+digitsum(n/10));
}

int main()
{
    int n;
    n=2534;
    cout<<digitsum(n);
    return 0;
}