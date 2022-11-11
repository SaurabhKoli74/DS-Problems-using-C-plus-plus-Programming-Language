#include<iostream>
#include<cmath>
using namespace std;
//Logarithmic_Solution
int countd(int n)
{
    return floor(log10(n)+1);
}
int main()
{
    int n;
    n=1234;
    cout<<countd(n);
}