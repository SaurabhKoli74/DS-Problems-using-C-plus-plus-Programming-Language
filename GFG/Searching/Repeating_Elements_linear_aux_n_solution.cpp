//We have given one array
//in that all elements are different except 1 elements
//We have to return that one element
//array is Unsorted
//array must contain 0
//1.Array_size , n>=2
//2.Only one Element Repeats (Any number of times)
//3.All the Elements from 0 to max(arr) are present
//Conclusion
//0<=max(arr)<=n-2 //cauze one elements has to be repeat
//with no midification in array

//We can do it by three methods
//1.Super_Naive_solution ---O(n^2)
//2.Naive_Solution --- O(nlogn) not written its easy as we have to sort then cal
//3.T.C = O(n) , A.S = O(n-1) using boolean array
//4. T.C = O(n) , A.S = O(1)

//3.Solution ---->
//T.C = O(n)
//A.S = O(n-1)

#include <bits/stdc++.h> 

using namespace std;



int repeat(int arr[], int n)
{
	bool visit[n];
	
	memset(visit, false, sizeof(visit));
	
	for(int i = 0; i < n; i++)
	{
		if(visit[arr[i]])
			return arr[i];
		visit[arr[i]] = true;
	}

	return -1;
}


int main() {
    

 int arr[] = {0, 2, 1, 3, 2, 2}, n= 6;

 cout << repeat(arr, n);

	return 0;
}