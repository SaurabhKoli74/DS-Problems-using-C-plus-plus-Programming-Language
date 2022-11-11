#include <stdio.h>

void change(int *number, int *number2)
{
    int a, b;
    a = *number;
    *number = *number2;
    *number2 = a;
    printf("The sum of a & b  is now %d\n", *number + *number2);
    printf("The subtraction of a & b is now % d", *number - *number2);
}
int main()
{
    int a = 5, b = 20;
    printf("The sum of a & b is %d\n", a + b); 
    printf("The subtr of a &b is %d\n", a - b);
    change(&a, &b);

    return 0;
}
