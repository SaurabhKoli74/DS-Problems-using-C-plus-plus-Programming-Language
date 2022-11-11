
#include <iostream>
#include <limits.h>
using namespace std;
// Iterative_Solution
// T.C = Theta(n)
// Auxilary_Space_Complexity = Theta(1)
/*
int fact(int n)
{
    int res = 1;

    for(int i=2; i<=n; i++)
    {
        res = res * i;
    }

    return res;
}
int main() {

        int number = 5;

        cout<<fact(number);

        return 0;
}


*/

// Recursive_Solution

// Iterative_Solution
// T.C = Theta(n)
// Auxilary_Space_Complexity = Theta(n)
//Iterative_Solution_is_Better_Than_Recursive
#include <iostream>
#include <limits.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;

    return n * fact(n - 1);
}
int main()
{

    int number = 5;

    cout << fact(number);

    return 0;
}