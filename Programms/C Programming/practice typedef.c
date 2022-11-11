#include<stdio.h>
int main()
{
//int *a, *b;
// or we can go by type def to define pointer
typedef int* pointer;
pointer a,b;
int c,d;
a=&c;
b=&d;
return 0;
}


//// this is example of use of typedef