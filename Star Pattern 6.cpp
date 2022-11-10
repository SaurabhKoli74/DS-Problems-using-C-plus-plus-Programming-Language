#include <iostream>
using namespace std;

/*

Pattern :
  1234567
1 ABCDCBA
2 ABC CBA
3 AB   BA
4 A     A

*/

int main()
{
    int rows;
    cout << "Enter the no. of Rows" << endl;
    cin >> rows;
    int mid = (((2 * rows) - 1) / 2) + 1;
    for (int i = 1; i <= rows; i++)
    {
        char ch = 'A';
        for (int j = 1; j < 2 * rows; j++)
        {
            if (j <= (mid + 1) - i || j >= (mid - 1) + i)
            {
                cout << ch;
                j <= mid ? ch++ : ch--;
            }
            else
            {
                cout << " ";

                if (j == mid)
                {
                    ch--;
                }
            }
        }
        cout << endl;
    }
    return 0;
}