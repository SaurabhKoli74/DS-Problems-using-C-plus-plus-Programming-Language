#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


//T.C = O(nlogn)
//its also called Intra_Sort
//cauze generally it follows quick_sort
//But sometimes when array is half sorted then it follow insertion likewise or heap sort(worst case more that nlogn time)
//So , Intra_Sort(quick_sort,Insertion_sort,Heap_sort)
//Generally Quick_Sort
//1.Vector

/*
int main()
{

    vector<int> v = {10, 20, 5, 7};

    sort(v.begin(), v.end());

    for (int x : v)
        cout << x << " ";

    sort(v.begin(), v.end(), greater<int>());

    cout << endl;
    for (int x : v)
        cout << x << " ";

    return 0;
}

*/

#include <iostream>
#include <algorithm>
using namespace std;

//2.Array

/*
int main()
{

    int arr[] = {10, 20, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    for (int x : arr)
        cout << x << " ";

    sort(arr, arr + n, greater<int>());

    cout << endl;
    for (int x : arr)
        cout << x << " ";

    return 0;
}

*/

//Own_Object_&_Order

#include <iostream>
#include <algorithm>
using namespace std;

struct Point
{
    int x, y;
};

bool MyComp(Point p1, Point p2)
{
    return p1.x > p2.x;
}

int main()
{

    Point arr[] = {{3, 10}, {2, 8}, {5, 4}};

    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n, MyComp);

    for (auto i : arr)
        cout << i.x << " " << i.y << endl;
}