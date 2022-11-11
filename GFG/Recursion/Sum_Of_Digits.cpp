#include <iostream>
using namespace std;

// Recursive_Solution
// T.C : Theta(d)
// A.S.C : Theta(d)
/*
int Sum_Of_Digits(int);
int main()
{
    int n;
    cin >> n;
    cout << Sum_Of_Digits(n);
    return 0;
}
int Sum_Of_Digits(int n)
{
    if (n < 10)
    {
        return n;
    }
    return Sum_Of_Digits(n / 10) + n % 10;
}

*/

#include <iostream>
using namespace std;

// Iterative_Solution
// T.C : Theta(d)
// A.S.C : Theta(1)
int Sum_Of_Digits(int);
int main()
{
    int n;
    cin >> n;
    cout << Sum_Of_Digits(n);
    return 0;
}
int Sum_Of_Digits(int n)
{
    int res = 0;
    while (n > 0)
    {
        res = res + n % 10;
        n = n / 10;
    }

    return res;
}