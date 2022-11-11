#include <stdio.h>

/* pointers */

void ptrfunc(int *ptr)
{
    *ptr = 8;
}
int main()
{
    int x = 5;             //Declaring & Initializing Variable
    printf("x = %d\n", x); //printing value of x variable
    ptrfunc(&x);           //calling Function prtfunc while passing argument '&x'
    printf("x = %d", x);   // printing value of x again
    return 0;
}
