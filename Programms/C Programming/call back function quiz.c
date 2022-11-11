// using call back function print goodafternoon and ge and  calling a function as average of two numbers
#include <stdio.h>
int func1()
{
    int a, b;

    printf("Enter Two Numbers which you want the average of:\n");
    scanf("%d %d", &a, &b);
    int c = a + b;
    float average = c / 2;
    printf("The average of %d and %d is %3.2f\n", a, b, average);
}
void goodaft(int (*ptr)())
{

    printf("Good Afternoon User\n");
    ptr();
}
void goodeve(int (*ptr)())
{
    printf("Good Evening User\n");
    ptr();
}
int main()
{
    int (*ptr1)();
    ptr1 = func1;
    goodaft(ptr1);
    goodeve(ptr1);
    return 0;
}