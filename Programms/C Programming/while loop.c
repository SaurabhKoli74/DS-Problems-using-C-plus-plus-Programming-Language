#include <stdio.h>
int main()
{
    int a=0,b;
    printf("Enter the number");
    scanf("%d",&b);
    while (a<b)
    {
        printf("%d\n",a+1);
        a=a+1;

    }
    //the program will print first 50 numbers here no input is given from the user thats the diff....
    return 0;
}
