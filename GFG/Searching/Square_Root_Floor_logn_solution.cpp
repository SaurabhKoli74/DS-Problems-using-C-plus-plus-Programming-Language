#include <iostream>
using namespace std;
//Time_Complexity = O(logn)

int square_root(int n)
{
    int mid, low = 1, high = n;
    int square, ans = -1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        square = mid * mid;
        if (square == n)
        {
            return mid;
        }
        else if (square > n)
        {
            high = mid - 1;
        }
        else
        {
            ans = mid; //for_returning_the_floor_if_case_ans_is_in_floor
            low = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << square_root(n);
    return 0;
}