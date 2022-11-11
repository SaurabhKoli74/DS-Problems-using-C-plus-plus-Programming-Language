#include <iostream>
using namespace std;
//Method - 1
//Time_Complexity = O(sqrt(n))
//Drawback - Not_In_Sorted_Form

/*
 void All_D(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        // if (n % i == 0)
        // {
        //     cout << i << " ";
        // }
        // if (n % (n / i) == 0) // It_Will_Print_two_times_if_multiples_are_same
        // {
        //     cout << n / i << " ";
        // }

        //>>>>>OR>>>>>
        
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != n / i) //For_Not_Printing_Two_Times_If_Multiples_are_same
            {
                cout << n / i << " ";
            }
        }
    }
}


int main()
{
    int n;
    n = 35;
    All_D(n);
    return 0;
}
 */

#include <iostream>
using namespace std;
//Time_Complexity= Theta(sqrt(n))
void All_D(int n)
{
    int i;
    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
 
    if (i*i!=n) // For test_cases like 30,42 here after iterating first loop i is 6 and 7 but still 6*5 and 7*6 ie 5 and 6 will
    //be repeated
    {
        i--;
    }
    
    for (; i >= 1; i--)
    {
        if (n % i == 0)
            cout << n / i << " ";
    }
}
int main()
{
    int n;
    n = 12;
    All_D(n);
    return 0;
}
