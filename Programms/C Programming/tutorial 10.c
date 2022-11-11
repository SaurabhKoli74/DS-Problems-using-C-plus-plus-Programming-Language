#include  <stdio.h>
int main()
{
    int age;
    printf("Enter Your age\n");
    scanf("%d", &age);
    printf("You Have Entered %d as your age\n", age);
    if (age >= 18)
    {
        printf("You can Vote");
    }
    else if (age >= 10)
    {

        printf("You can vote for child");
    }
    else if (age >= 3)
    {
        printf("you can vote for babies");
    }
    else
    {
        printf("you can not vote");
    }
    return 0;
}
