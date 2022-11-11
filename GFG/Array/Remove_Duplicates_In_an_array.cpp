#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
//Naive_Solution
/*
//Time_Complexity = O(n)
//Space_Complexity = O(n)
//Auxilary_Space_Complexity= O(n)
int removeduplicates(int array[], int n)
{
    int a[n];
    a[0] = array[0];
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (array[i] != array[i - 1])
        {
            a[res] = array[i];
            res++;
        }
    }

    for (int i = 0; i < res; i++)
    {
        array[i] = a[i];
    }
    return res;
}
int main()
{
    int array[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 5};
    int n = sizeof(array) / sizeof(int);
    n = removeduplicates(array, n);

    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    
    return 0;
}
*/

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

//Efficient_Solution
//Time_Complexity = O(n)
//Auxilary_Space_Complexity =  Theta(1)
//Space_Complexity = O(n)
int removeduplicates(int array[], int n)
{

    int res = 1;

    for (int i = 1; i < n; i++)
    {
        if (array[i] != array[i - 1])
        {
            array[res++] = array[i];
        }
    }

    return res;
}
int main()
{
    int array[] = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 5};
    int n = sizeof(array) / sizeof(int);
    n = removeduplicates(array, n);

    for (int i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }

    return 0;
}