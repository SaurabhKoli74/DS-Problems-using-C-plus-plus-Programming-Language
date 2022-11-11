#include <stdio.h>

/* Pointers */ //Null pointer //

int main()
{
    int a = 5;
    int *p = NULL; //Declaring and Initializing NULL Pointer
    //p=&a; // here i changed null to to specific address so its changed
    // if the pointer is null it will show error when dereferencing  it will stop !!!
    // and if we try a only  defined pointer to dereference it will show garbage value
    if (p != NULL)
    { // here in if statement we can ignore paranthesis if the code line is only one ....
        printf("The value of a is %d\n", *p);
    }
    else
    {
        printf("Its null pointer can not be dereferenced\n");
    }

    return 0;
}