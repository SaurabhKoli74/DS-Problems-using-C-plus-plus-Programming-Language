#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, a;
    for (i = 0; i < 10; i++)
    {

        printf("%d\nenter Your age\n", i);
        scanf("%d", &a);
        if (a > 10)
        {

            break;
        }

        
    }
    return 0;
}
