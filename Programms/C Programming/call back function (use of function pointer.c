#include <stdio.h>
// without pointer function we can not function to function we get problem when passing a function through main function
// coz we can pass one funcion at a time
int sum(int a, int b)
{
    return a + b;
}
void Gmandexecute(int (*fptr)(int, int)) // here we are passing pointer function which points one function .that how we call back fuction
{
    printf("Good Morning User\n");
    printf("The sum of 3 and 4 is %d\n", fptr(3, 4));
}
void hellouser(int (*fptr)(int, int)) // this syntax is compulsary for call by functition
{

    printf("Hello User\n");
    printf("The sum of 3 and 4 is %d\n", fptr(3, 4));
}

int main()
{
    // int (*ptr)(int, int);
   // ptr = sum;         // here we can put & operator or no problem at all
    Gmandexecute(sum); // passing function to function by the help of pointer function
    hellouser(sum);
}