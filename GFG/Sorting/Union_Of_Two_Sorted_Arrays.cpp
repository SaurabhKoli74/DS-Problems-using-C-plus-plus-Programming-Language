#include <iostream>
using namespace std;
#include <vector>

void union_of_array(vector<int> &a1, vector<int> &a2)
{
    int i = 0, j = 0;

    while (i < a1.size() && j < a2.size())
    {
        if (i > 0 && a1[i] == a1[i - 1])
        {
            i++;
            continue;
        }

        if (j > 0 && a2[j] == a2[j - 1])
        {
            j++;
            continue;
        }

        if (a1[i] == a2[j])
        {
            cout << a1[i] << " ";
            j++;
            i++;
        }
        else if (a1[i] < a2[j])
        {
            cout << a1[i] << " ";
            i++;
        }
        else
        {
            cout << a2[j] << " ";
            j++;
        }
    }

    while (i < a1.size())
    {

        if (i == 0 || a1[i] != a1[i - 1])
        {
            cout << a1[i] << " ";
        }
        i++;
    }

    while (j < a2.size())
    {
        if (j == 0 || a2[j] != a2[j - 1])
        {
            cout << a2[j] << " ";
        }
        j++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    vector<int> a1 = {3, 4, 5, 6, 7};
    vector<int> a2 = {2, 3, 3, 4, 5};
    union_of_array(a1, a2);
    return 0;
}
