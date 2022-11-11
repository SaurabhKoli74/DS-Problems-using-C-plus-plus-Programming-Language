#include <iostream>
using namespace std;

/*
//Method - 1 -->Neive_Solution
//T.C --> Theta(Total_No._Of_Bits_In_Number)
int set_bits(int);
int main()
{
    int n;
    cin >> n;
    cout << set_bits(n);
    return 0;
}

int set_bits(int n)
{
    int count = 0;

    while (n)
    {

        
        if (1 & n)//OR ---->  count+=(1&n)
        {
            count++;
        }
        n=n>>1;           // or // --> n=n/2;
    }
    return count;
}
*/

#include <iostream>
using namespace std;
//Method 2 : Brian and Kerningham Algorithm
//T.C : Theta(No. of Set Bits)
/*
int set_bits(int);
int main()
{
    int n;
    cin >> n;
    cout << set_bits(n);
    return 0;
}

int set_bits(int n)
{
    int count = 0;

    while (n)
    {
        n = (n & (n - 1));
        count++;
    }
    return count;
}


*/














#include <iostream>
using namespace std;

//Method - 3 -->Lookup-Table 
//T.C - Theta(1) By PreComputation
// Here We will Counts total set bits in each chunk
//ie 8 , 8 , 8 , 8 bits
// 8 bits means 2^8-1 ie 255 number
//So we will precompute set bits for 0 to 255 number

//PRE-COMPUTATION -->
int table[256];
void initialize_table()
{
    table[0] = 0;
    for (int i = 1; i < 256; i++)
    {
        table[i] = (i & 1) + table[i / 2]; // last bit + previously computed number set bits
    }
}
int set_bits(int);
int main()
{
    initialize_table();
    int n;
    cin >> n;
    cout << set_bits(n);
                   
    return 0;
}

int set_bits(int n)
{
    int count = 0;

/*

    count += table[n & 0xff]; // 0xFF is hexadecimal consist of only 8 bits (11111111)
    //So it will take only the rightmost 8 bits number
    n = n >> 8;               // right shift the number by 8 bits
    count += table[n & 0xff]; // 2nd chunk
    n = n >> 8;
    count += table[n & 0xff]; // 3rd chunk
    n = n >> 8;
    count += table[n & 0xff]; // 4th chunk

    return count;

    */
    ///OR//
    return table[n & 0xff] + table[n >> 8 & 0xff] + table[n >> 16 & 0xff] + table[n >> 24];
}