#include <stdio.h>
/*Pointers */

int main()
{

    int x = 5;   //Declared and Initialized Variable
    int *a = &x; //pointer Variable declared and Initialized with address of x variable

    printf("%d\n", &x); //This will print address of x variable
    printf("%d", a);    // This will also print address of x variable

    return 0;
}