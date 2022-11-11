#include <bits/stdc++.h>

using namespace std;

//T.C = Theta(n);

void intersection(const vector<int> &a1, const vector<int> &a2)
{
    int i = 0;
    int j = 0;
    while (i < a1.size() && j < a2.size())
    {
        if (i > 0 && a1[i] == a1[i - 1])
        {
            i++;
            
            // j++; its wrong cauze when we are in 2nd element same it will work but if third element is also same then we cant say a2 has also the same element
            continue;
        }

        if (a1[i] == a2[j])
        {
            cout << a1[i] << " ";
            i++;
            j++;
        }
        else if (a1[i] > a2[j])
        {
            j++;
        }
        else
            i++;
    }
}

int main()
{

    vector<int> a1 = {10,20,20,20,60};
    vector<int> a2 = {2,20,20,20};
    intersection(a1, a2);
}