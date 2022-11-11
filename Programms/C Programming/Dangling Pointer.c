#include <stdio.h>
#include <stdlib.h>
// NOTE - Dangling pointer means the pointer whoose pointed memory is now freed but pointer remains and it will produce bugs in program soo we
// have to assign it NULL Pointer
int *Danglingptr()
{
    int a, b, c, sum;
    a = 56;
    b = 67;
    c = 87;
    sum = a + b + c;
    return sum;
}

int main()
{
    //case 1: De allocation of Memory
    int *ptr = (int *)malloc(5 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 56;
    ptr[2] = 78;
    ptr[3] = 99;
    free(ptr);  // Now the ptr is Dangling pointer ,,,, the memory is freed but pointer remain at that position Dangling pointer occures
    ptr = NULL; // NOw the ptr is not Dangling pointer

    // Case 2: Returning Local Var in function Calls
    int *Dangptr;
    Dangptr = Danglingptr(); // Dangptr is now a Dangling Pointer coz it is freed previously
    Dangptr = NULL;          // Now Dangptr is not Dangling Pointer

    //case 3: If a var goes out of scope
    int *Dangptr3;
    {
        int a = 34;
        Dangptr3 = &a;
    }
    //Now Dangptr3 is Dangling Pointer coz it is freed and its scope no longer available
    Dangptr3 = NULL; // NOW Dangptr3 is not Dangling pointer
}