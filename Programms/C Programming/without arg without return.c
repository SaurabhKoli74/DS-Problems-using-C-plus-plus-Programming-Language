#include <stdio.h>
void star_pattern()
{
    int a;
    printf("Enter how many stars(*) you want : \n");

    /* the both declaration and definition of function are done together 

*/
    scanf("%d", &a);

    for (int i = 0; i < a; i++)
    {
        printf("*");
    }
}
int main(int argc, char const *argv[])
{
    star_pattern();
    return 0;
}
