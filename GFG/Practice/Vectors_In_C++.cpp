#include <iostream>
#include <vector>
using namespace std;

int main()
{
    auto ab = 3.4;   // auto keyword specifies that the type of the var that is being declared will be automatically deducted from its initializer
    vector<int> arr(5,6); // size = 5
    cout<<arr.size()<<endl;
    for (int i = 0; i < 5; i++)
    {
        arr.push_back(3);
    }
   cout << arr.size() << '\n';
    cout << "Output Of Begin and End: ";

    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        //  *i =3; // We can modify coz iterator is nonconst
        cout << *i << " ";
    }

    cout << "\nOutput Of Cbegin and Cend: ";
    for (auto i = arr.cbegin(); i != arr.cend(); i++)
    {
        // *i =3; // Error as iterator is const
        cout << *i << " ";
        
    }

    cout << "\nOutput Of rbegin and rend: ";

    for (auto i = arr.rbegin(); i != arr.rend(); i++)
    {
        cout << *i << " ";
    } 

    cout << "\nOutput Of crbegin and crend: ";

    for (auto i = arr.crbegin(); i != arr.crend(); i++)
    {
        // *i=3; //Error as Iterator is const
        cout << *i << " ";
    }

    cout << "\nSize : " << arr.size();
    cout << "\nCapacity : " << arr.capacity();
    cout << "\nMax_Size : " << arr.max_size();

    //resizes the vector size  to 4
    arr.resize(4);
    cout << "\nSize : " << arr.size();
    cout << "\nCapacity : " << arr.capacity();

    //Checks if the vector is empty or not
    if (arr.empty() == false)
    {
        cout << "\nVector is not empty";
    }
    else
        cout << "\nVector is empty";

    //Shrinks the vector
    arr.shrink_to_fit();
    cout << "\nVector Elements are: ";
    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout << *i << " ";
    }

    cout << "\nReference Operator [arr] : arr[2] = " << arr[2];
    cout << "\nnat : g1.at(3) = " << arr.at(3);
    cout << "\nfront() : arr.front() = " << arr.front();
    cout << "\nback() : arr.back() = " << arr.back();

    //pointer to the first element
    int *pos = arr.data();

    cout << "\nthe first element is " << *pos;

    //Modifiers :
    //fill the array with 5 ten times
    arr.assign(10, 5);

    cout << "\nThe Vector Elements are : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    arr.push_back(15);

    cout << "\nSize = " << arr.size();
    cout << "\nCapacity = " << arr.capacity();
    cout << "\nMax_Size =  " << arr.max_size();

    cout << "\nThe last element is: " << arr[arr.size() - 1];

    //removes the last element
    arr.pop_back();
    cout << "\nThe last element is: " << arr[arr.size() - 1];
    cout << "\nThe Vector Elements are : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    //insert 54 at the begining
    arr.insert(arr.begin()+2, 54);
    cout << "\nThe first element is: " << arr[2];

    //romoves the first element
    arr.erase(arr.begin()+2);
    cout << "\nThe first element is: " << arr[2];

    //inserts at the begining
    arr.emplace(arr.begin()+1, 100);
    cout << "\nThe first element is: " << arr[0];

    //inserts 20 at end
    arr.emplace_back(20);
    cout << "\nThe last element is: " << arr.back();
    cout << "\nThe Vector Elements are : ";
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    //erases the vector

    arr.clear();
    cout << "\nVector Size After erase(): " << arr.size();

    // two vectors to perform swap
    vector<int> v1, v2;
    v1.push_back(3);
    v1.push_back(5);
    v2.push_back(7);
    v2.push_back(8);
    v2.push_back(9);
    cout << "\n\nVector 1: ";
    for (auto i = v1.begin(); i != v1.end(); i++)
    {
        cout << *i << " ";
    }

    cout << "\n\nVector 2: ";
    for (auto i = v2.begin(); i != v2.end(); i++)
    {
        cout << *i << " ";
    }
    //v1=v2; // Direct Assign Possible

    //Swaps v1 and v2
    v2.swap(v1);
    cout << "\nAfter Swap \nVector 1: ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " ";
    }

    cout << "\nVector 2: ";
    for (int i = 0; i < v2.size(); i++)
    {
        cout << v2[i] << " ";
    }

    return 0;
}