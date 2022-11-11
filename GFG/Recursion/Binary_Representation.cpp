

#include <iostream>
using namespace std;
void Binary(int);
int main()
{
    int n;
    cin >> n;
    Binary(n);
    return 0;
}

void Binary(int n)
{
    if (n == 0)
    {
        return;
    }

    Binary(n >> 1);
    cout << n % 2;
}





/*
#include<iostream>
using namespace std;


int BinaryCon(int n)
{
    string res;
    while (n)
    {
        int lastbit=n%2;
        res+=10*res+lastbit;
        n/=2;
    }
    return res;
    
}
int main(int argc, char const *argv[])
{
    int n;
    n=8;
    cout<<BinaryCon(n);
    return 0;
}

*/