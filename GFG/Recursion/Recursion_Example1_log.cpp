#include <iostream>
using namespace std;
//The Function gives log(n)base 2 means on which power of 2 it becomes n it is for base 2 it will vary for base like on which power of 3 likewise

/*
// Iterative_Solution
//T.C = O(logn)
//Auxilary_Space_Complexity = Theta(1)


int logof(int);
int main()
{
    int n;
    cin >> n;
    cout << logof(n);
    return 0;
}

int logof(int n)
{
    int counter = 0;
    while (n != 1)       //Keep on dividing n till n becomes zero
    {
        counter++;
        n = n >> 1;
    }
    return counter;
}

*/

// Recursive_Solution
//T.C = O(logn)
//Auxilary_Space_Complexity = Theta(floor(logn))
//Space_Complexity = Theta(floor(logn))

int logof(int);
int main()
{
    int n;
    cin >> n;
    cout << logof(n);
    return 0;
}

int logof(int n)
{
    if (n == 1) //Keep on dividing n till n becomes zero
    {
        return 0;
    }
    return 1 + logof(n / 2);
}