//Problem is to kill the every kth person among n people starting from one or 0(dont add one in myjos)
//last survival will be the O/P
//if no survival survived then return 0
#include <iostream>
using namespace std;

int jos(int n, int k)
{
    if (n == 1)
        return 0;
    else
    {
        cout << k << " ";
        return (jos(n - 1, k) + k) % n;
    }
}

int myJos(int n, int k) // Dont have to right the function if n starts from 0
{
    return jos(n, k) + 1;
}

int main()
{

    cout << myJos(5, 3);

    return 0;
}