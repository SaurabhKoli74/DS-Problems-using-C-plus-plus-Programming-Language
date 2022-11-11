#include <stdio.h>

// Fuction pointer is pointing the pointer to function

int sum(int a, int b)
{
    return a + b;
}
void func()
{

    printf("Hello world"); // the pointer of main will not point to this function coz declaration is diferent
}
int main()
{
    printf("The sum of 2 and 4 is %d\n", sum(2, 4));
    int (*fptr)(int, int); // Declaration of pointer function in order to point the function
    fptr = &sum;           // def of function pointer
    int d = (*fptr)(4, 5); // derefencing the ptr and giving arg
    // OR
    // int d = (fptr)(4, 5);
    printf("The Value of d is %d\n", d);



    //NOTE - We can typedef the Function pointer ie we can make a data type of Function pointer
    // then we can create function pointers 

    typedef int (*fp)(int,int);//created a type
    fp myf; // created an var of type fp
    myf = sum;
    d = myf(4,5);

    printf("The value of d is %d\n",d);
    return 0;
}

// NOte - we can call function by function pointer without derefercing also