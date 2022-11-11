#include <iostream>
using namespace std;

void Binary_Representationof(int);
int main()
{
    int n;
    cin >> n;
    Binary_Representationof(n);
    return 0;
}

void Binary_Representationof(int n)
{
    if (n == 0)
    {
        return;
    }

    Binary_Representationof(n / 2); //keep on deviding, to print reminder in reverce order ,, after deviding then we cal reminder for each number in reverse order
    cout << n % 2 << " ";           // in reverse order printing of reminders
}