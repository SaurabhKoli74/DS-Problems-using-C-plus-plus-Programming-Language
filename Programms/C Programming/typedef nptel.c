#include<stdio.h>
int main()
{
    int a;
    typedef int x[2];  // here x=int[2]
    x myarray[3];
    printf("%u\n",sizeof(myarray));
    printf("%d %d\n",myarray[1][2],a);
    return 0;
}