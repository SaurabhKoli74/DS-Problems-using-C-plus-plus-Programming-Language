#include <stdio.h>
int b1 = 34; // Globle var is declared if there is no local var or formal var func1 consider globle var
int func1(int b)
{
    static int varf = 0; // preserves the previous value and hold the value or memory
    printf("The value of varf is %d\n", varf);
    varf++;
    // if we dont take any value then it will consider zero itself
    //printing the value of b1 ie globle var coz there is no formal or local var
    //printf("The value of b is %d\n", b1);
    //  printf("The Adderss of b inside func1 is %d\n",&b);     diff add of b
    return b * 10; //returning the value to main
}
int main()
{
    // initializing the var
    int b, loc;
    b = 344;
    loc = func1(b);
    loc = func1(b); // here we see the value increases by 1 and it is locked to 1 if we call func1 once more it will hold the previous value and increse

    // printing the value of b after passing through func1
    //printf("The value of b is %d\n", loc);

    //printf("The value of b inside main is %d\n", &b); //The address inside func1 and main is diff func1 cant effect on main by passing variable
    return 0;
}
