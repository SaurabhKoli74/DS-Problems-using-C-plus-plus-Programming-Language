#include <stdio.h>
int fib_recurssive(int n)
{
    if (n == 1 || n == 2)
    {
        return n - 1;
    }
    else
    {
        return (fib_recurssive(n - 1) + fib_recurssive(n - 2));
    }
}
int fib_iterative(int n)
{
    int a = 0;
    int b = 1;

    for (int i = 0; i < n - 1; i++)
    {
        b = a + b; //1 for iteration 1
        a = b - a; //1 for iteration 1
    }
    return a;
}
int main(int argc, char const *argv[])
{

    int a;
    printf("Enter The index number at which you want fibonacci series\n\n");
    scanf("%d", &a);

    printf("The fibonacci series at position %d is %d in Iterative method \n\n\n", a, fib_iterative(a));
    printf("The fibonacci series at position %d is %d in recurssive Method\n\n\n", a, fib_recurssive(a));

    return 0;
}
