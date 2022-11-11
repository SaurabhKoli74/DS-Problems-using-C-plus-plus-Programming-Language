#include <stdio.h>
int sum()
{
    int a,b,c;
    printf("Enter number a");
    scanf("%d",&a);
    printf("Enter number b");
    scanf("%d",&b);
    c=a+b;
    printf("the sum is %d",c);
    return c;
}
int main()
{
    int c;
    sum();
    return 0;
}
