
#include <iostream>
using namespace std;

/*
Pattern :
  123456789

1 *********
2 **** ****
3 ***   ***
4 **     **
5 *       *

*/
int main()
{
    int rows;
    cout << "Enter no. of Rows" << endl;
    cin >> rows;
    int columns = (2 * rows) - 1;
    int mid = (columns / 2) + 1;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            if ((j <= (mid + 1) - i) || (j >= (mid - 1) + i))
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
