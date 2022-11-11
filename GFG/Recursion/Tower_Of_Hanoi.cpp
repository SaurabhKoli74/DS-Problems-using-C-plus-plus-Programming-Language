//In this Problem We have to move Disc from A to C We have 3 Towers
#include <iostream>
using namespace std;
// T.C : 
void tower_of_Hanoi(int, char, char, char);
int main()
{
    int n;
    char a, b, c;
    cin >> n >> a >> b >> c;
    tower_of_Hanoi(n, a, b, c);
    return 0;
}
void tower_of_Hanoi(int n, char a, char b, char c)
{
    if (n == 1)
    {
        cout << "move 1 from " << a << " to " << c<<endl;
        return;
    }
    tower_of_Hanoi(n - 1, a, c, b);
    cout <<"Move "<< n << " from " << a << " to " << c<<endl;
    tower_of_Hanoi(n - 1, b, a, c);
}