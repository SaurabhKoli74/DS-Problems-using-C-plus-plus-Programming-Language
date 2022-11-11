#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  // your code goes here
  int N;
  long long int num;
  cin >> N;
  int j;
  for (int i = 0; i < N; i++)
  {

    cin >> num;
    int power = pow(10, num - 1);
    for (j = power;; j++)
    {
      if ((j % 2 != 0) && (j % 3 == 0) && (j % 9 != 0))
      {
        cout << j << endl;
        break;
      }
    }
  }
  return 0;
}
