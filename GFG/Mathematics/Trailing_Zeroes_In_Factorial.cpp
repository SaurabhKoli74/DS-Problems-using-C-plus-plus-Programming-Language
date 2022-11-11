#include <iostream>
#include <limits.h>
using namespace std;

//Time_Comlexity = Theta(logn)
 int countTrailingZeros(int n)
{
	int res = 0;

	for(int i=5; i<=n; i=i*5)
	{
		res = res + (n / i);
	}

	return res;
}
int main() {
    
    	int number = 10;
    	
    	cout<<countTrailingZeros(number);
    	
    	return 0;
}