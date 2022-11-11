#include <iostream>
#include <cmath>
#include <climits>
using namespace std;
// T.C = O(n)
//If left sum of some element is equal to right sum then return true
bool checkEquilibrium(int arr[], int n)
{
	for(int i  = 0; i < n; i++)
	{
		int l_sum = 0, r_sum = 0;//must cauze if first element right sum is zero then we have to return true

		for(int j = 0; j < i; j++)//cal lsum
			l_sum += arr[j];

		for(int j = i + 1; j < n; j++) //cal rsum
			r_sum += arr[j];

		if(l_sum == r_sum)
			return true;
	}

	return false;
}
    


int main() {
	
      int arr[] = {3, 4, 8, -9, 20, 6}, n = 6;
      
      printf("%s",checkEquilibrium(arr, n)? "true" : "false");

    
}