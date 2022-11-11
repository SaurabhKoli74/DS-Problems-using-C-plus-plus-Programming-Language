
#include <iostream>
using namespace std;

void foo(float *);
int main()
{
   int i = 10, *p = &i;
   foo(&i);
}
void foo(float *p)
{
   cout << *p;
}