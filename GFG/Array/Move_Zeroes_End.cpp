#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
//Neive_Solution
//Time_Complexity = O(n^2)

void move_zeroes_end(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                    break; //it is must otherwise ans is in unsorted form
                }
            }
        }
    }
}
int main()
{
    int arr[] = {1, 2, 0, 7, 3, 8};
    int n = sizeof(arr) / sizeof(int);

    
    move_zeroes_end(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}


//Efficient_Solution
//Time_Complexity = O(n)
//Space_Complexity = Theta(n)
/*
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
void move_zeroes_end(int arr[], int n)
{
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[k], arr[i]);
            k++;
        }
    }
}
int main()
{
    int arr[] = {1, 2, 0, 0, 4, 0,6,0};
    int n = sizeof(arr) / sizeof(int);

    move_zeroes_end(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
*/