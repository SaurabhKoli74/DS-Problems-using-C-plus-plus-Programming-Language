#include <iostream>
#include <limits.h>
using namespace std;
//Euclidean_Algorithm
/*
Time_Complexity = O(log(min(a,b)))
int gcd(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    return a;
}

int main()
{

    int a = 12, b = 15;

    cout << gcd(a, b);

    return 0;
}


*/

#include <iostream>
#include <limits.h>
using namespace std;
//Optimization_Of_Euclidean_Algorithm
//Time_Complexity = O(log(min(a,b)))
int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{

    int a = 12, b = 15;
   
    cout << gcd(a, b);

    return 0;
}