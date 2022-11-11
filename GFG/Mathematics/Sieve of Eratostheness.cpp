
//  #include <iostream>
// #include <vector>
// using namespace std;
//Prime_Number_Printing_Neive_Solution_Time_Complexity = O(n*sqrt(n)) = n^3/2
//Sieve Of Eratosthenes_Time_Complexity = O(nloglogn)
/*
void isprime(int n)
{
    vector<bool> arr(n + 1, true);
    for (int i = 2; i*i <= n; i++)
    {
        if (arr[i])
        {
            for (int j = 2 * i; j <= n; j += i)
            {
                arr[j] = false;
            }
        }
    }

    for (int i = 2; i <=n; i++)
    {
        if (arr[i])
        {
            cout<<i<<" ";
        }

    }

}
int main()
{
    int n = 25;
    isprime(n);
    return 0;
} */

#include <iostream>
#include <vector>
using namespace std;
//Optimization_In_Code_Not_In_Time_Complexity
//Sieve Of Eratosthenes_Time_Complexity = O(nloglogn)
void isprime(int n)
{
    vector<bool> arr(n + 1, true);
    for (int i = 2; i <= n; i++)
    {
        if (arr[i])
        {
            cout << i << " ";
            for (int j = i * i; j <= n; j += i)
            {
                arr[j] = false;
            }
        }
    }
}
int main()
{
    int n = 25;
    isprime(n);
    return 0;
}
