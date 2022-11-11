#include <iostream>
using namespace std;
#include <cmath>
/*
//Neive_Solution
//Time_Complexity = O((a*b)-max(a,b))
int lcm(int a,int b)
{
    int M=max(a,b);
    while (1)
    {
        if(M%a==0 && M%b==0)
        {
            break;
        }
        M++;
    }
    return M;
}
int main()
{
    int a=3,b=5;
    cout<<lcm(a,b);
}
*/

#include <iostream>
using namespace std;
//Time_Complexity = O(log(min(a,b)))
int GCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return GCD(b, a % b);
    }
}

int LCM(int a,int b)
{
    //Formula =  (a * b) = GCD(a,b) * LCM(a,b)
    return a*b/GCD(a,b);
}

int main()
{
    int a=3,b=2;
    cout<<LCM(a,b);
}
