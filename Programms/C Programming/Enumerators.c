/*Enumerators are used to increase the user readiability 
coz human cant say that every time 1 means true it may be the summation of two numbers so for human underastandable purpose we use 
Enumerators thats all about it
Just syntax is different in some percent as compared to structure and union */

#include <stdio.h>
enum boolean
{
    false,
    true // it is considered as 0,1,2,3,4.........
    // here we havent given semicoln it doesnt matter in enum
    //its a rule
};

enum boolean is_Even(int n)
{
    if (n % 2 == 0)
    {
        return true; // we can also do return 1 but for user readiability
    }
    else
    {
        return false;
    }
}
int main()
{
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    if (n >= 0)
    {
        if (is_Even(n))
        {
            printf("Even Number.\n");
        }
        else
        {
            printf("Odd Number.\n");
        }
    }
    else
    {
        printf("enter valid number.\n");
    }

    return 0;
}