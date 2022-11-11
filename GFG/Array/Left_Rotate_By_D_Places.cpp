#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
//Neive solution is to call left rotate by one d times 
//Not written Neive Solution ..Time_Complexity = Theta(n*d)
//optimization -
//Time_complexity = Theta(d+n-d+d) = Theta(n+d) = Theta(n)
//But Auxilary Space = Theta(d)
/*
void left_rotate_by_D(int arr[], int n, int d)
{
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = d; i < n; i++)
    {
        arr[i - d] = arr[i];
    }

    for (int i = 0; i < d; i++)
    {
        arr[n - d + i] = temp[i];
    }
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int d = 2;
    int n = sizeof(arr) / sizeof(int);
    left_rotate_by_D(arr, n, d);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}

*/


#include<iostream>
#include<vector>
#include<string>
#include<cmath>
using namespace std;

//Logic is to,
//1.reverce 0 to d-1 elements
//2.reverce d to n elements
//3.reverce whole array

//Time_Complexity = O(n)
//Auxilary_Space_Complexity = Theta(1)
void reverce(int arr[],int a,int b)
{
    while (a<b)
    {
        swap(arr[a],arr[b]);
        a++;b--;
    }
    
}
void left_rotate_by_D(int arr[], int n, int d)
{
   reverce(arr,0,d-1);
   reverce(arr,d,n-1);
   reverce(arr,0,n-1);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int d = 2;
    int n = sizeof(arr) / sizeof(int);
    left_rotate_by_D(arr, n, d);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}