#include <stdio.h>
// void pointer is general purpose pointer which does not need data type specification , we give address of any data type to void pointer
//But when we dereferencing we have to typecasting ,,,in Dynamic MA we learnt the return value is null in DMA So we typecast there and
//there we dont have to attach & !!operator to scanf remember this!! .....!!!

int main()
{
    void *ptr; //Declaring void pointer
    int a = 3;
    float b = 3.8;
    ptr = &a;                                             // Defining void pointer to a
    printf("The value of a is %d \n", *((int *)ptr));     // Dereferencing and Type casting
    ptr = &b;                                             // Defining void pointer to b
    printf("The value of b is %3.1f\n", *((float *)ptr)); // Dereferencing and Type casting
    return 0;
}
// 
/*
The diff bet Declaration and Definition is ,,
in Declaration ,, we say to computer that we are using one var (Memory is not Reserved)
in Def :  WE daclare and reserve the memory
*/