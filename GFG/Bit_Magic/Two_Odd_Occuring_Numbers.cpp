#include <iostream>
using namespace std;
//Problem Statement - Find Two odd occuring numbers ( array contain only two odd occuring number ,, other will be even occuring numbers)
/*
Logic :- 
1.Xor of all array elements , it will give xor of two odd occuring numbers
2.last set bit of resultant xor will be "1" that means in two odd occuring numbers , one number will have last bit as one 
anothor number has set bit as zero 
//there will be two groups as last set bit has one and another as last bit as zero
//in both cases there must be even occuring number will appear even times so they cancelout eachother and we will get odd occuring number

3. We just have to find the number which has only the last bit is set from xor
4. then just run a loop , if first condn "arr[i] & res != 0" for last bit set odd occuring number
in that "number1 = number1 ^ arr[i]" 
second condn "arr[i] & res ==0"
int that "number2= number2 ^ arr[i]"

*/

#include <iostream>
using namespace std;
//Method 1:
//Efficient_Solution
//T.C = O(n)
void oddAppearing(int arr[], int n)
{

    int xors = 0, res1 = 0, res2 = 0;

    for (int i = 0; i < n; i++) //Xor of all numbers
        xors = xors ^ arr[i];

    int sn = xors & (~(xors - 1)); // only_rightmost_set_bit_number_of_XOR

    for (int i = 0; i < n; i++)
    {
        if ((arr[i] & sn) != 0) // SetBit(1)
            res1 = res1 ^ arr[i];
        else
            res2 = res2 ^ arr[i]; //NonSetBit(0)
    }

    cout << res1 << " " << res2;
}

int main()
{

    int arr[] = {3, 4, 3, 4, 5, 4, 4, 6, 7, 7}, n = 10;

    oddAppearing(arr, n);
}

#include <iostream>
using namespace std;
/*
// Method 2:
//Neive_Solution
//T.C = O(n^2)
void oddAppearing(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int count = 0;
        
        for(int j = 0; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }
        
        if(count % 2 != 0)
            cout<<arr[i]<<" ";
        
    }
    
}
    
int main() {
	
	int arr[]= {3, 4, 3, 4, 5, 4, 4, 6, 7, 7}, n = 10;
	
    oddAppearing(arr, n);
    
}
*/