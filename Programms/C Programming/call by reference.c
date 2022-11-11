#include<stdio.h>
/* in call by reference if we change any value in function it reflects on main function */
int changevalue(int *ptr)
{
    *ptr=385;

}
int main()
{
    int a=8,num;
    printf("the value of a is %d\n",a);
    changevalue(&a);
    printf("The value of a is %d\n",a);
    return 0;
}
