#include <iostream>
using namespace std;
#include <vector>

void shuffling_parities();
int main()
{
    shuffling_parities();
    return 0;
}

void shuffling_parities()
{
    int n, N;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        cin >> N;
        arr.resize(N);
        for (int j = 0; j < N; j++)
            cin >> arr[j];
        int j;
        for (j = 0; j < N; j++)
        {
            for (int k = i; k < N; k++)
            {
                if ((j + 1) % 2 == 1 && arr[j] % 2 == 0)
                {
                    swap(arr[i], arr[j]);
                }
                else if ((j + 1) % 2 == 0 && arr[j] % 2 == 1)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
        int arraysum = 0;
        for (int i = 0; i < N; i++)
        {
            arraysum += ((arr[i] + (i + 1)) % 2);
        }
        cout << arraysum << endl;
    }
}