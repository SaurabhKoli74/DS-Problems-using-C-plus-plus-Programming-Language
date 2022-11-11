#include <iostream>
using namespace std;
// Q.1
//O/p --> in an array we have print odd occuring number
//note ---> there will be only one odd occuring number

/*
XOR PROPERTY -- different input -->true

1. X^0 = X
2. X^Y = Y^X (Commutative)
3. (X^Y)^Z = X^(Y^Z)
4. X^X = 0
*/
/*
int odd_occuring_Number(int[], int);
int main()
{
    int n;
    int arr[5] = {1, 1, 2, 2, 2};
    cout << odd_occuring_Number(arr, 5);
    return 0;
}

int odd_occuring_Number(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}


*/

#include <iostream>
using namespace std;
// Variation_In_Question-->
/* Given an array of n number that has values in range(1,n+1), Every no. appear exactly once
hence one no. is missing . Find the missing no.
*/

// Logic - is to xor of all elements in range (1 to n+1)
//              ^
//     xor of all array elements
//               =
//         Missing number

int missing_no(int[], int);
int main()
{
    int arr[5] = {5, 2, 3, 4, 6};
    cout << missing_no(arr, 5);
}

int missing_no(int arr[], int n)
{
    int Xor_n_plus_one = 0;
    int Xor_array_elements = 0;

    for (int i = 0; i < n; i++)
    {
        Xor_array_elements = Xor_array_elements ^ arr[i];
    }

    for (int i = 1; i <= n + 1; i++)
    {
        Xor_n_plus_one = Xor_n_plus_one ^ i;  // We_can_xor_one_by_one_also
    }

    return (Xor_array_elements ^ Xor_n_plus_one);
}
