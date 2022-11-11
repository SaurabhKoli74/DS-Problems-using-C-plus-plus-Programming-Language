#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

//Range-Based for loop in C++
//Since C++11
//Executes Over A Range

/*


for( range_declaration : range_expression )
    loop_statement


*/

int main()
{
    //Iterating Over Whole Array
    /*
    vector<int>v(5); // vector_of_size_5_initialized_to_zero
    vector<int>v(5,5) // vector_of_size_5_initialized_to_5
    */
    vector<int> v = {1, 2, 3, 4, 5};
    for (int i : v)
    {
        // cout<<v[i]<<' '; // O/p 2,3,4,5 7283 ..Wrong
        cout << i << ' ';
    }

    cout << '\n';

    //the Initializer may be a braced-init-list
    for (auto n : {1, 2, 3, 4, 5})
    {
        cout << n << ' ';
    }

    cout << '\n';
    int arr[5] = {1, 2, 3, 4};
    //Iterating Over Array
    for (auto i : arr)
    {
        cout << i << ' ';
    }

    cout << '\n';
    //running loop for every array element
    for (auto i : arr)
    {
        cout << "Run ";
    }

    cout << '\n';
    //Printing String Characters
    string a = "Never Give Up";
    for (auto i : a)
    {
        cout << i;
    }


    cout<<'\n';



    //Printing keys and values of a map
    map<int,int>MAP({{3,2},{3,4},{5,6}});

    for(auto i : MAP)
    {
        cout<<'{'<<i.first<<", "<<i.second<< "}\n";
    }
    return 0;
}