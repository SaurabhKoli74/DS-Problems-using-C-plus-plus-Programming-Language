#include <stdio.h>
#include <stdlib.h>
/*

There are Four Types Of Pointers ---
1. Void ponter (type) OR Generic Pointer
2.NULL Pointer (value)
3.Dangling Pointer (freed)
4.Wild Pointer(uninitialized)

*/

// WILD POINTER ---
int main()
{
    int a = 34;
    int *ptr; // ptr is now wild pointer coz is uninitialized
    //*ptr=45;  // it is not a good thing it will show Error
    ptr = &a; // Now it is no Longer Available as Wild pointer
    printf("The value of a is %d", *ptr);

    return 0;
}
