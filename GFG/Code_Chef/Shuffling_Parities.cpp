#include <iostream>
using namespace std;
#include <vector>
//Neive_Solution 
//T.C = O(n^2)
/*
void shuffling_parities();
int main()
{
    shuffling_parities();
    return 0;
}

void shuffling_parities()
{
    int n, N;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> N;
        arr.resize(N);
        for (int j = 0; j < N; j++)
            cin >> arr[j];
        int j;
        int arraysum = 0;
        for (j = 0; j < N; j++)
        {
            for (int k = j; k < N; k++)
            {
                if ((j + 1) % 2 == 1 && arr[k] % 2 == 0)
                {
                    swap(arr[j], arr[k]);
                }
                else if ((j + 1) % 2 == 0 && arr[k] % 2 == 1)
                {
                    swap(arr[j], arr[k]);
                }
            }
            arraysum += ((arr[j] + (j + 1)) % 2);
            cout << arraysum << endl;
        }
    }
}
*/
