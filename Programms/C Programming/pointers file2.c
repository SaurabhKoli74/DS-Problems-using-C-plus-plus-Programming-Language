#include <stdio.h>

/*pointers  */

int main()
{
    int a = 5;          // Declared and Initialized Variable
    printf("%d\n", &a); // Printing address of variable x using address of operator (&)
    printf("%d", *&a);  // This will print actual value of 'a' variable i.e. 5

    return 0;
}