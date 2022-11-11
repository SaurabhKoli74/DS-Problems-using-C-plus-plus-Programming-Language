#include <iostream>
#include <limits.h>
using namespace std;
//Time_Complexity = O(sqrt(n))
/*  void printPrimeFactors(int n)
{
	if(n <= 1)
		return;

	for(int i=2; i*i<=n; i++)
	{
		while(n % i == 0)
		{
			cout<<i<<" ";

			n = n / i;
		}
	}

    Note : Prime Factors can be written in multiplication of theirr powers 
    //ex. 12--->2,2,3---->2^2,3^1 ......for 3^1 below condition is must
	if(n > 1)  // If Last Prime_Factor power is 1 then this condition is must
		cout<<n<<" ";

	cout<<endl;
}

int main() {
    
    	int n = 450;
    	
    	printPrimeFactors(n);
    	
    	return 0;
}
 */

#include <iostream>
using namespace std;
//Time_Complexity = Theta(sqrt(n))
void primeF(int n)
{
    if (n <= 1)
    {
        return;
    }
    while (n % 2 == 0)
    {
        cout << "2 ";
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        cout << "3 ";
        n = n / 3;
    }

    for (int i = 5; i * i <= n; i += 6)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
        while (n % (i + 2) == 0)
        {
            cout << i + 2 << " ";
            n = n / (i + 2);
        }
    }
    if (n >= 5) // or (n>3) as 2 & 3 cases are already handled
    {
        cout << n;
    }
}

int main()
{
    int n;
    n = 450;
    primeF(n);
    return 0;
}